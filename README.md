# Dismemberment System for Unreal Engine

The Dismemberment System is a powerful and flexible solution for implementing dynamic character dismemberment in Unreal Engine projects. It provides a comprehensive framework for separating character limbs, managing dismembered parts, and handling associated effects such as weapon dropping.

## Features

- **Dynamic Limb Separation**: Allows for runtime dismemberment of character body parts.
- **Customizable Body Part Data**: Utilizes data-driven design with ULimbData asset for easy configuration.
- **Weapon Handling**: Automatically manages attached weapons during dismemberment.
- **Physics Simulation**: Spawned limbs have configurable physics behavior.
- **Event System**: Provides pre and post-dismemberment events for custom logic implementation.
- **Optimized Performance**: Efficient bone hiding and actor spawning mechanisms.
- **Blueprint Support**: Full exposure to Blueprint for easy integration in visual scripting.

## Installation

1. Copy the `Dismemberment` folder into your Unreal Engine project's `Plugins` directory.
2. Rebuild your project.
3. Enable the Dismemberment plugin in your project settings.

## Usage

### Setting Up the Dismemberment Component

1. Add `UDismembermentComponent` to your character blueprint or C++ class:

   ```cpp
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dismemberment")
   UDismembermentComponent* DismembermentComponent;
   ```

2. Initialize the component in your character's constructor:

   ```cpp
   DismembermentComponent = CreateDefaultSubobject<UDismembermentComponent>(TEXT("DismembermentComponent"));
   ```

### Configuring Limb Data

1. Create a new Limb Data asset in the Content Browser: Right-click > Miscellaneous > Data Asset > LimbData
2. Configure the body parts, associated bones, and limb meshes in the newly created asset.
3. Assign the Limb Data asset to your Dismemberment Component in the blueprint or C++:

   ```cpp
   DismembermentComponent->LimbDataAsset = YourLimbDataAsset;
   ```

### Performing Dismemberment

```cpp
// Dismember a specific bone
DismembermentComponent->Dismember(FName("upperarm_l"), true);
```

### Handling Dismemberment Events

```cpp
// Bind to pre-dismemberment event
DismembermentComponent->OnPreDismemberment.AddDynamic(this, &AYourClass::OnPreDismembermentHandler);

// Bind to post-dismemberment event
DismembermentComponent->OnPostDismemberment.AddDynamic(this, &AYourClass::OnPostDismembermentHandler);
```

## Best Practices

- Create detailed LimbData assets for different character types.
- Use the weapon tag system to properly manage equipment during dismemberment.
- Implement custom logic in the pre and post-dismemberment events for special effects or gameplay mechanics.
- Adjust physics settings on spawned limbs for desired behavior.

## Performance Considerations

- The system efficiently hides bones instead of modifying the skeletal mesh, which is performance-friendly.
- Consider the number of physics-enabled limbs in a scene, as they can impact performance.

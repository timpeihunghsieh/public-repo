# Strategy Pattern Example
## Scenario
We are making a zoo simulation game. Within the game, there are **Ducks**. The ducks can `Fly()` The challenge is that in the future, product manager may want to add in new ducks with new behavior OR swapping out existing behaviors for some ducks. In addition, new behaviors may be added. 

## Design
The key idea is to model actions as an object (as opposed to model actions as class methods).
-- The superclass **Duck** represents all types of ducks. **Duck** _has_ **FlyBehavior** and **QuackBehavior**.
-- Each instance of **Duck** will add **FlyBehavior** during object construction.

![StrategyDiagram](https://github.com/timpeihunghsieh/public-repo/blob/main/cpp/design-patterns/strategy/assets/StrategyDiagram.png?raw=true)

# Alternative Strategy Use Cases
The above example show cases where a certain behavior is shared with many different objects.
Here are some examples where there is only one main object. However, there are many different algorithms/strategies. 
-- **Map application** - User may want to have suggested route via Walking, Biking, Driving. The main application can have a reference to **PathAlgorithm**. Walking, Biking, and Driving can be subclasses of **PathAlgorithm**. When we need to add in new algoritm, we can subclass **PathAlgorithm**. The main application does not need to change. 
-- **Data Compression** - Compressing a file may need to use different algorithms based on different file sizes.
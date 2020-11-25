# Observer Pattern Example

## Scenario
WeatherStation has a set of **WeatherData** (e.g. humidity, temperature, pressure). **WeatherStation** also has a number of Displays to display this data. Each **Display** shows **WeatherData** differently. The **WeatherData** would also change over time. For this example, the source of data is not important. The important part is how the **Display** are updated when **WeatherData** is updated.

## Design
The key idea is that:
- **Observer** represents an entity that wants to receive data. It has a `Update()` that receives the data. **Observer** keeps track of the data that it receives.
- **Subject** represents a data source. It has contains a list of **Observers**. **Subject** has `RegisterObserver(), RemoveObserver()` to keep track of the observers.
- **Observer** will register iteslf in its constructor using `RegisterObserver()`.
- A container class like WeatherStation can hold:
-- **WeatherData** (**Subject**)
-- **StatisticsDisplay** (**Observer**)
-- **CurrentConditionDisplay** (**Observer**)

When **WeatherData** changes, **WeatherData** will be responsible to Update all **Observer**s. Each **Observer** will display the data.

![ObserverDiagram](https://raw.githubusercontent.com/timpeihunghsieh/public-repo/main/cpp/design-patterns/observer/assets/ObserverDiagram.jpeg)
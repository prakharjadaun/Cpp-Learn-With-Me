//hierarchical inheritance
class Parent
{};

class child1: Parent
{};

class child2: Parent
{};

class child3: Parent
{};


/*

Applications
                    Animal        //animal name, age, color
        --- --- --- --- --- --- --- ---
        |               |             |
        Carnivores   Herbivores  Omnivores

void typeOfFoodTheyConsume()
{
        print("Eats both herbs and meat")
}
*/
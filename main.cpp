#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: Human
//  action 1: the human eats
human.eat();
//  action 2: the human drinks
human.drink();
//  action 3: the human sleeps
human.sleep(); 

//  2)
//  Noun: Bird
//  action 1: The bird flies
bird.fly();
//  action 2: The bird eats seeds
bird.eatSeeds();
//  action 3: The bird lays an egg
bird.layAnEgg();
 
//  3)
//  Noun: Car
//  action 1: The car moves forwards
car.moveForwards();
//  action 2: The car moves backwards
car.moveBackwards();
//  action 3: The car turns left
car.turnLeft();
 
//  4)
//  Noun: Dog
//  action 1: The dog barks
dog.bark();
//  action 2: The dog wags its tail
dog.wagTail();
//  action 3: The dog sits
dog.sit(); 

//  5)
//  Noun: Bee
//  action 1: The bee buzzes
bee.buzz();
//  action 2: The bee collects pollen
bee.collectPollen();
//  action 3: The bee returns to the hive
bee.returnToHive();

//  6)
//  Noun: Cat
//  action 1: The cat meows
cat.meow();
//  action 2: The cat runs
cat.run();
//  action 3: The cat jumps
cat.jump();

//  7)
//  Noun: Oven
//  action 1: The oven heats up
oven.heatUp();
//  action 2: The oven cools down
oven.coolDown();
//  action 3: The oven cooks pasta bake
oven.cookPastaBake();

//  8)
//  Noun: Microphone
//  action 1: The microphone picks up sound
microphone.pickUpSound();
//  action 2: The microphone converts sound to signal
microphone.convertSoundToSignal();
//  action 3: The microphone changes polar pattern
microphone.changePolarPattern();

//  9)
//  Noun: Boiler
//  action 1: The boiler heats up the water
boiler.heatUpWater();
//  action 2: The boiler uses gas
boiler.useGas();
//  action 3: The boiler leaks
boiler.leak();

//  10)
//  Noun: Plant
//  action 1: The plant grows
plant.grow();
//  action 2: The plant photosynthesises 
plant.photosynthesise();
//  action 3: The plant creates pollen
plant.createPollen();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

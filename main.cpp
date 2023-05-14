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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: wiseWizard
//  action 1: Casts a powerful spell
wiseWizard.castSpell();
//  action 2: Enchants an object
wiseWizard.enchantObject();
//  action 3: Dispels magical illusions
wiseWizard.dispelIllusions();
//  2)
//  Noun: technoDJ
//  action 1: plays deck one
technoDJ.pressPlayOnDeckOne();
//  action 2: scratches deck two
technoDJ.scratchDeckTwo();
//  action 3: chooses new track
technoDJ.grabNewRecord();
//  3)
//  Noun: professionalCyclist
//  action 1: start pedaling
professionalCyclist.startPedaling();
//  action 2: indicate turning left
professionalCyclist.indicateLeftTurn();
//  action 3: check helmet straps
professionalCyclist.checkHelmetStraps();
//  4)
//  Noun: storeAssistant
//  action 1: add item to cart
storeAssistant.addItemToCart();
//  action 2: remove item from cart
storeAssistant.removeItemFromCart();
//  action 3: increases the quantity of an item in the cart
storeAssistant.increaseItemQuantityInCart();
//  5)
//  Noun: playerWeapon
//  action 1: load weapon
playerWeapon.load();
//  action 2: fire weapon
playerWeapon.fire();
//  action 3: change weapon
playerWeapon.change();
//  6)
//  Noun: steeringWheel
//  action 1: turn left
steeringWheel.turnLeft();
//  action 2: turn right
steeringWheel.turnRight();
//  action 3: align centre
steeringWheel.alignCentre();
//  7)
//  Noun: knightOnHorse
//  action 1: dismount horse
knightOnHorse.dismountFromHorse();
//  action 2: mount the horse
knightOnHorse.mountHorse();
//  action 3: charge on horseback
knightOnHorse.chargeOnHorse();
//  8)
//  Noun: ambulanceDriver
//  action 1: provide medical assistance to the patient
ambulanceDriver.provideMedicalAssistance();
//  action 2: activate the sirens and lights
ambulanceDriver.activateSirensAndLights();
//  action 3: drive ambulance
ambulanceDriver.driveAmbulance();
//  9)
//  Noun: headChef
//  action 1: wash veg
headChef.washVegetables();
//  action 2: cut veg
headChef.cutVegetables();
//  action 3: cook veg
headChef.cookVegetables();
//  10)
//  Noun: newAdventurer
//  action 1: accept quests
newAdventurer.acceptQuests();
//  action 2: plot quest route
newAdventurer.plotRouteToQuests();
//  action 3: hand in quest
newAdventurer.deliverQuests();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}

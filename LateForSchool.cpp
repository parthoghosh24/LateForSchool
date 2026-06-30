// LateForSchool.cpp 
// Main entry point for our game and it's engine
//

#include "Engine/Engine.h"
int main()
{
    // instantiate the engine
    
    Engine engine;

    // Once instantiated, we should initialize it.
    
    engine.Initialize();

    // Once initialized, we would run the game.

    engine.Run();

    return 0;
}

#include <raylib.h>

int main() {
  //these can also be macros 
	const int screenWidth = 800;
    const int screenHeight = 450;

    // Initialize the window
    InitWindow(screenWidth, screenHeight, "My Raylib Window");

    // Set the target FPS (frames per second)
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) {  // Detect window close button or ESC key
        // Update
        
        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);  // Set background color to light gray
        EndDrawing();
    }

    // De-initialize and close the window
    CloseWindow();

    return 0;
}

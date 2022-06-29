Description:

- The project was made in C++ with OpenGL library and it's extensions
- The project solves the problem of a control system of the lift in the building.
- As in result of the project, the authors improved their programming skills and team working.

How to use the project?

- In the beginning, you can change the queue type widgets by choosing the appropriate option in the upper right corner.

- After that, you can set the number of floors include in the simulation, by clicking the + and - buttons in the middle of the screen. When you add more

- The next step is to adjust the passengers of the lift. First, you should choose the number of passengers you want to add, and next pick the enter and exit floor. Then click, ,,add awaitng passengers" button.

- After those steps, the simulation of the lift will start working. You could add new passengers with different current and target floors during the whole time of the program working.

Remember if you add more than 8 passengers in the third step the overload information will show. You will be obliged to unload a few passengers to decrease the weight to less than 600kg (one passenger weight 70kg)

Libraries used in project:

- include algorithm

- include chrono

- include cmath

- include imgui.h

- include imgui_internal.h

- include functional

- include stdio.h

- include imgui.h

- include backends/imgui_impl_glfw.h

- include backends/imgui_impl_opengl3.h

- include GLES2/gl2.h

- include glfw3.h

The content of key files:

elevator.cpp

At the beginning of this file are few functions responsible for drawing the menu, all control widgets, and the elevator. These are the functions:

- drawQueueTypeWidgets

- drawPassangersWidgets

- drawFloorsWidgets

- drawStatInfoWidgets

- drawResetWidtgets

- drawOverloadInfo

- drawMenu

- drawElevator

At the end of this file is elevatorGo function that includes all the elevator movement mechanisms, such as:

- move up and down

- getting passengers in/out of the lift

- Going to the ground floor after 5s, when the elevator is empty

elevator.hpp

- Include struct elevator that contains functions and storage data like:

- the direction of the lift

- floor numbers

- current floor

- outcoming and incoming passengers/floors

- queue type

- the queue of waiting passengers


window.cpp
- This file is responsible for the creation of the window.

Requirements

- Windows 10 or newer


Compilation
- The code can be compiled with the provided CMakeList file. You should choose main.cpp as the start file and click, ,,run" button.

Authors:

- Kacper Drozdowski

- Mikołaj Turek

// Oct20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
    while (true)
    {
        //prompt
        std::cout << "Enter a shape type (only reactangle, circle, and cylinder are handled here" << std::endl;


        std::string shape;
        std::cin >> shape;

        if (shape == " rectangle" || shape == "Reactangle")
        {
            float length;
            float width = 0.0f;
            std::cout << " Enter the length and width" << std:: endl;
            std::cin >> length >> width;

            float area = length * width;
         
            std::cout << " The area is: " << area << std::endl;

        }

        else if (shape == "circle")
        {
            float radius = 0.0f;
        
            std::cout << "The area is: " << 3.14 * radius * radius << std::endl;
        }
        else if (shape == "cylinder")
        {
            float radius = 0.0f;
            float height = 0.0f;
            std::cout << " The area is: " << 3.14 * radius * radius * height << std::endl;
        }
        else
        {
            std::cout << "Unrecognized shape-- try again?";
        }

    }
    
}



#include "elevator.hpp"

#include <algorithm>
#include <chrono>
#include <cmath>

#include "imgui.h"
#include "imgui_internal.h"

const auto MAX_FLOORS = 12;    
const auto MAX_CAP = 600.0f;    
const auto PASSANGER_W = 70.0f; 
const auto MAX_PASS = int(MAX_CAP / PASSANGER_W);

void Elevator::draw()
{
    elevatorGo();   

    drawElevator(); 
    drawMenu();    
}


void Elevator::drawQueueTypeWidgets()
{
    ImGui::PushItemWidth(360);  
    ImGui::LabelText("##l1", "Rodzaj kolejki przy wybieraniu kolejnych pieter");  
    ImGui::RadioButton("Kolejnosc wcisniecia", &m_queueType, 0);        
    ImGui::RadioButton("Uwzglednij kierunek ruchu", &m_queueType, 1);   
    ImGui::RadioButton("Uwzglednij ruch - na parter", &m_queueType, 2);
    ImGui::NewLine();   
    ImGui::Separator(); 
}

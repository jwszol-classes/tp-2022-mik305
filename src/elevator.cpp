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

void Elevator::drawPassangersWidgets(int& nextFloor)
{
    ImGui::PushItemWidth(90);  
    ImGui::InputInt("Liczba pasazerow", &m_incomingPassangers);  
    ImGui::InputInt("Pietro wejscia", &m_inFloor); 
    ImGui::InputInt("Pietro wyjscia", &m_outFloor);

    m_incomingPassangers = std::clamp(m_incomingPassangers, 0, 32); 
    m_inFloor = std::clamp(m_inFloor, 0, m_floors);  
    m_outFloor = std::clamp(m_outFloor, 0, m_floors);

    if (ImGui::Button("Dodaj oczekujacach pasazerow##btn")) 
    {
        if (m_inFloor != m_outFloor)            
        {
            for (int i = 0; i < m_incomingPassangers; ++i)              
                m_waitingPassangers.push_back({m_inFloor, m_outFloor}); 
            nextFloor = m_inFloor;  
        }
    }
    ImGui::NewLine();   
    ImGui::Separator(); 
}

void Elevator::drawFloorsWidgets()
{
    ImGui::PushItemWidth(90); 
    ImGui::InputInt("Liczba pieter", &m_floors);    
    m_floors = std::clamp(m_floors, 1, MAX_FLOORS);  
    ImGui::NewLine();   
    ImGui::Separator();
}

void Elevator::drawStatInfoWidgets()
{
    ImGui::PushItemWidth(360);  
    ImGui::LabelText("##l3", "Kolejne pietra: [%s]", m_queueStr.c_str()); 
    ImGui::PushItemWidth(360);  
    ImGui::LabelText("##l4", "Liczba pasazerow w windzie: %d", int(m_passangers.size())); 
}

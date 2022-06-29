#pragma once

#include <vector>
#include <string>

struct Elevator
{
public:
    void draw();    

private:
    void drawMenu();     
    void drawElevator();   

    void elevatorGo();                   
    void recalculateQueue();              
    void insertNextFloor(int nextFloor);  

    void insertAlwaysDescending(int nextFloor);    
                                                   
    void insertIncreasingDeacrising(int nextFloor);  
                                                  

    void drawQueueTypeWidgets();                    
    void drawPassangersWidgets(int& nextFloor);    
    void drawFloorsWidgets();                       
    void drawStatInfoWidgets();                   
    void drawResetWidtgets();                       
    void drawOverloadInfo();                        

private:
    float m_currentFloor = 0;       
    int m_direction = 0;          
    int m_floors = 3;              
    int m_inFloor = 0;           
    int m_outFloor = 0;        
    int m_incomingPassangers = 1;  
    int m_outcomingPassangers = 0;  
    int m_queueType = 0;           
    long long m_timewait = 4000;   
    std::string m_queueStr;         
    std::vector<int> m_passangers;  
    std::vector<int> m_queue;       
    std::vector<std::pair<int, int>> m_waitingPassangers;  
};

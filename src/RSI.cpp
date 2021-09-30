//////////////////////////////////////////////
//  My first libary metods and function.    //
//////////////////////////////////////////////


#include <iostream>
#include "RSI.h"

namespace helpSpace
{
    void myTest()
    {
        std::cout << " Hello world R.S.I libary !" << std::endl;
    }

    Power::Power(int f_value , int s_value )  // Constructor
    {
        Power::setPowerValue(f_value,s_value);
    }
    
    void Power::setPowerValue(int firstValue , int secondValue)
    {
        m_firstValue = firstValue;
        m_secondValue = secondValue;
    }
    
    int Power::calculatePower()
    {
        int temp =  m_firstValue;
        for(int i = 0; i < (m_secondValue -1); i++)
        { temp *= m_firstValue; }
        return temp;
    }
    

    RGBA::RGBA(ushort red,ushort green,ushort blue , ushort alpha ) // Constructor
    {
        m_red = red;
        m_green = green;
        m_blue = blue;
        m_alpha = alpha;
    }
    
    void RGBA::printRGBA(RGBA rgba_object)
    {
        std::cout << "====================" << std::endl;
        std::cout << "Red = " << rgba_object.m_red << " | Green = " << rgba_object.m_green <<  " | Blue = " << rgba_object.m_blue << " | Alpha = " << rgba_object.m_alpha << std::endl;
        std::cout << "====================" << std::endl;
        
    }

    void Stack::reset()
    {
        for(int i = 0; i < SIZE; i++)
        { stackArr[i] = 0; }
        std::cout << "Stack clear!" << std::endl;
    }
    
    bool Stack::push(int value)
    {
        if(workSize >= -1 && workSize != (SIZE-1) && workSize < (SIZE-1))
        {
                workSize++;
                stackArr[workSize] = value;
                return true;
        }
        else
        {
            std::cout << "Stack overflow!" << std::endl;
            return false;
        }
    }
    
    int Stack::pop()
    {
        if(workSize == -1)
        { std::cout << "Stack empty!" << std::endl; }
        else 
        {
            int temp = stackArr[workSize];
            stackArr[workSize] = 0;
            workSize--;
            return temp;
        }
    }
    
    void Stack::printStack()
    { 
        std::cout << "Stack is = ";
        for(int i = 0; i < SIZE; i++)
        {
            if(stackArr[i] != 0)
            std::cout << stackArr[i] << " ";
        }
        std::cout << std::endl;
    }
    
}
    
    

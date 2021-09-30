//////////////////////////////////////////////
//  My first libary metods and function.    //
//////////////////////////////////////////////

#ifndef RSI_H
#define RSI_H

namespace helpSpace
{
///////////////////////////////////////////////////////////////////
    void myTest();
/////////////////////////////////////////////////////////////////// 
        class Power
    {
    public:
        Power(int f_value = 7, int s_value = 5);
        void setPowerValue(int firstValue , int secondValue);
        int calculatePower();
        
    private:
        int m_firstValue;
        int m_secondValue;
    };
///////////////////////////////////////////////////////////////////
        class Stack
    {
    public:
        void reset();
        bool push(int value);
        int pop();
        void printStack();
    private:
        const int SIZE = 10;
        int stackArr[10] = {0};
        int workSize = -1;
    };
///////////////////////////////////////////////////////////////////
        class RGBA
    {
    public:
        RGBA(ushort red = 0,ushort green = 0,ushort blue = 0, ushort alpha = 255 ); 
        void printRGBA(RGBA rgba_object);
        
    private:
        ushort m_red, m_green, m_blue, m_alpha;
    };
///////////////////////////////////////////////////////////////////
}
#endif

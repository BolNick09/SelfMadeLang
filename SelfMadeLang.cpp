
#include <iostream>
#include <vector>

#include "SelfMadeLang.h"


int main()
{
    std::vector <Value*> vValues;

    vValues.push_back(new StringValue ("Hello world!"));
    vValues.push_back(new IntValue (5));
    vValues.push_back(new FloatValue (3.7));
    vValues.push_back(new BoolValue (false));


    for (auto i : vValues)
    {
        StringValue str = i->toString();
        std::cout << str.get() << std::endl;
    }
    for (auto i : vValues)
        delete i;
}
//----------------------------------------------------------------

StringValue StringValue::toString()
{
    return StringValue (value);
}

IntValue StringValue::toInt()
{
    try
    {
        return IntValue (stoi(value));
    }
    catch (...)
    {
        throw std::invalid_argument("Unable to convert str to int");
    }
}

FloatValue StringValue::toFloat()
{
    try
    {
        return FloatValue(stof(value));
    }
    catch (...)
    {
        throw std::invalid_argument("Unable to convert str to float");
    }
}
BoolValue StringValue::toBool()
{
    return BoolValue (!value.empty());
}
//----------------------------------------------------------------

StringValue IntValue::toString()
{
    return StringValue(std::to_string(value));
}

IntValue IntValue::toInt()
{
    return IntValue(value);
}
FloatValue IntValue::toFloat()
{
    return FloatValue(value);
}
BoolValue IntValue::toBool()
{
    return BoolValue(value);
}
//----------------------------------------------------------------

StringValue FloatValue::toString()
{
    return StringValue(std::to_string(value));
}

IntValue FloatValue::toInt()
{
    return IntValue(value);
}
FloatValue FloatValue::toFloat()
{
    return FloatValue(value);
}
BoolValue FloatValue::toBool()
{
    return BoolValue(value);
}

//----------------------------------------------------------------

StringValue BoolValue::toString()
{
    return value ? StringValue("True") : StringValue("False");
}

IntValue BoolValue::toInt()
{
    return IntValue(value);
}
FloatValue BoolValue::toFloat()
{
    return FloatValue(value);
}
BoolValue BoolValue::toBool()
{
    return BoolValue(value);
}
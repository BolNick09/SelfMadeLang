#pragma once

#include <string>

class Value;
class StringValue;
class IntValue;
class FloatValue;
class BoolValue;


class Value
{
public:

	virtual StringValue toString() = 0;
	virtual IntValue toInt() = 0;
	virtual FloatValue toFloat() = 0;
	virtual BoolValue toBool() = 0;
};

class StringValue : public Value
{
private:
	std::string value;
public:

	StringValue(const std::string& value) : value(value) {}

	virtual StringValue toString() override;
	virtual IntValue toInt() override;
	virtual FloatValue toFloat() override;
	virtual BoolValue toBool() override;

	std::string get() const
	{
		return value;
	}
	void set(const std::string& value)
	{
		this->value = value;
	}
};
//----------------------------------------------------------------

class IntValue : public Value
{
private:
	int value;
public:

	IntValue(int value) : value(value) {}

	virtual StringValue toString() override;
	virtual IntValue toInt() override;
	virtual FloatValue toFloat() override;
	virtual BoolValue toBool() override;

	int get() const
	{
		return value;
	}
	void set(int value)
	{
		this->value = value;
	}
};
//----------------------------------------------------------------

class FloatValue : public Value
{
private:
	float value;
public:

	FloatValue(float value) : value(value) {}

	virtual StringValue toString() override;
	virtual IntValue toInt() override;
	virtual FloatValue toFloat() override;
	virtual BoolValue toBool() override;

	float get() const
	{
		return value;
	}
	void set(float value)
	{
		this->value = value;
	}
};
//----------------------------------------------------------------

class BoolValue : public Value
{
private:
	float value;
public:

	BoolValue(bool value) : value(value) {}

	virtual StringValue toString() override;
	virtual IntValue toInt() override;
	virtual FloatValue toFloat() override;
	virtual BoolValue toBool() override;

	bool get() const
	{
		return value;
	}
	void set(bool value)
	{
		this->value = value;
	}
};



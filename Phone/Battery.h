#pragma once
const int talktimeCapacity = 100;
const int BatteryModelCapacity = 50;
class Battery 
{
public:
	Battery();
	~Battery();
	int getTalktime();
	void setTalktime(int);
	const char* getBatteryModel();
	void setBatteryModel(const char* _BatteryModel);
private:
	int talktime = talktimeCapacity;
	char BatteryModle[BatteryModelCapacity];
};
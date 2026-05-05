#pragma once
#include <vector>

class Event
{
public:
	//Defining a function pointer
	typedef void (*event_call)(void);


	void AddEvent(event_call event)
	{
		Events.push_back(event);
	}

	void RemoveEvent(event_call event)
	{
		for (size_t i = 0; i < Events.size(); i++)
		{
			if (Events[i] == event)
			{
				Events.erase(Events.begin() + i);
				return;
			}
		}
	}

	void EvokeEvents()
	{
		for (size_t i = 0; i < Events.size(); i++)
		{
			Events[i]();
		}
	}
private:
	std::vector<event_call> Events;
};
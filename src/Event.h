#pragma once
#include <vector>
#include <functional>

class Event
{
public:
	//Defining a function pointer


	void AddEvent(std::function<void()> event)
	{
		Events.push_back(event);
	}

	void EvokeEvent(std::function<void()> event)
	{
		for (auto& event : Events)
		{
			if (event.target_type() == event.target_type())
			{
				event();
				break;
			}
		}
	}
private:
	std::vector<std::function<void()>> Events;
};
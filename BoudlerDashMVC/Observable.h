#pragma once

#include <vector>
#include <memory>

#include "Listener.h"

class Observable
{
private:
	std::vector <std::shared_ptr<Listener>> listeners;
public:
	Observable() {}
	~Observable() {}

	void addListener(std::shared_ptr<Listener> listener) {
		listeners.push_back(listener);
	}

	void clearListeners() {
		listeners.clear();
	}

	void notifyAll() {
		for (auto &listener : listeners) {
			listener->update();
		}
	}
};

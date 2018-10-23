#include "pch.h"
#include "ENGINE.h"

void Engine::input() {
	Event event;
	while (m_window.pollEvent(event)) {
		switch (m_state) {

		}




		if (event.type == Event::KeyPressed)
		
			if (Keyboard::isKeyPressed(Keyboard::Escape)) 
				m_window.close();
	
	}
}
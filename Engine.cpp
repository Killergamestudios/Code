#include "pch.h"
#include "ENGINE.h"

Engine::Engine() {
	m_window.create(VideoMode(VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height), "Game Name", Style::Fullscreen);
}

void Engine::run() {
	Clock clock;

	while (m_window.isOpen()) {
		Time dt = clock.restart();
		GameTimeTotal = dt;

		float dtAsSeconds = dt.asSeconds();

		input();
		//update();
		//draw();

	}
}
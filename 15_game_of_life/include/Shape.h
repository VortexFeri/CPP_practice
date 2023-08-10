#pragma once
#include <vector>

enum Shape {
	BLOCK,
	BOAT,
	BLINKER,
	BEACON,
	GLIDER,
	PULSAR,
	PULSAR_2,
	PENTADECATHLON
};

std::vector<std::vector<bool>> getShape(Shape shape) {
	std::vector<std::vector<bool>> selectedShape;
	switch (shape) {
	case BLOCK:
		selectedShape = {
			{1,1},
			{1,1}
		};
		break;
	case BOAT:
		selectedShape = {
			{1,1,0},
			{1,0,1},
			{1,0,0}
		};
		break;
	case BLINKER:
		selectedShape = {
			{1,1,1}
		};
		break;
	case BEACON:
		selectedShape = {
			{1,1,0,0},
			{1,0,0,0},
			{0,0,0,1},
			{0,0,1,1}
		};
		break;
	case GLIDER:
		selectedShape = {
			{0,1,0},
			{0,0,1},
			{1,1,1}
		};
		break;
	case PULSAR:
		selectedShape = {
			{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
			{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
			{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{1,1,1,0,0,1,1,0,1,1,0,0,1,1,1},
			{0,0,1,0,1,0,1,0,1,0,1,0,1,0,0},
			{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0},
			{0,0,1,0,1,0,1,0,1,0,1,0,1,0,0},
			{1,1,1,0,0,1,1,0,1,1,0,0,1,1,1},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0},
			{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
			{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
		};
		break;
	case PULSAR_2:
		selectedShape = {
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,1,1,1,0,0,0,1,1,1,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,1,0,0,0,0,1,0,1,0,0,0,0,1,0},
			{0,1,0,0,0,0,1,0,1,0,0,0,0,1,0},
			{0,1,0,0,0,0,1,0,1,0,0,0,0,1,0},
			{0,0,0,1,1,1,0,0,0,1,1,1,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,1,1,1,0,0,0,1,1,1,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,1,0,0,0,0,1,0,1,0,0,0,0,1,0},
			{0,1,0,0,0,0,1,0,1,0,0,0,0,1,0},
			{0,1,0,0,0,0,1,0,1,0,0,0,0,1,0},
			{0,0,0,1,1,1,0,0,0,1,1,1,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		};
		break;
	case PENTADECATHLON:
		selectedShape = {
			{0,0,1,0,0,0,0,1,0,0},
			{1,1,0,1,1,1,1,0,1,1},
			{0,0,1,0,0,0,0,1,0,0}
		};
		break;
	}
	
	return selectedShape;
}

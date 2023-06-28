#pragma once
class GameObject {
protected :

	int distance, x, y;

public :

	GameObject(int startX, int startY, int distance) {
	
		this->x = startX;
		this->y = startY;
		this->distance = distance;
	}

	virtual ~GameObject() {};

	virtual void move(int x , int y) = 0;
	virtual char getShape() = 0;
	
	int getX() { return this->x; }
	int getY() { return this->y; }
	int getDistance() { return this->distance; }

	bool collide(GameObject* target) { 
		
		return (this->x == target->getX() && this->y == target->getY()) ? true : false;
	}
};
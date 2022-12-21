#include "box2d_type_conversions.h"

void godot_to_box2d(const Vector2 &pos, b2Vec2 &box2d_pos) {
    box2d_pos.x = pos.x * G_TO_B_FACTOR;
    box2d_pos.y = pos.y * G_TO_B_FACTOR;
}

void box2d_to_godot(const b2Vec2 &box2d_pos, Vector2 &pos) {
    pos.x = B_TO_G_FACTOR * box2d_pos.x;
    pos.y = B_TO_G_FACTOR * box2d_pos.y;
}

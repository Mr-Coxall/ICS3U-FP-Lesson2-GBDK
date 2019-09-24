// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program displays a sprite on a Gameboy

#include <stdio.h>
#include <gb/gb.h>

#include "smiler.c"

void main() {
    // this function displays a happy face

    set_sprite_data(0, 47, smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
}

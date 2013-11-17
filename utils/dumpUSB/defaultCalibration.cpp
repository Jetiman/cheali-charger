/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "AnalogInputs.h"

const AnalogInputs::DefaultValues AnalogInputs::inputsP_[AnalogInputs::PHYSICAL_INPUTS] PROGMEM = {
    {{0, 0},                        {26368, 12120}},    //Vout
    {{0, 0},                        {26613, 12518}},    //VreversePolarity
    {{160, 50},                        {163, 1000}},    //Ismps
    {{18682, 50},                        {832, 300}},    //Idischarge

    {{0, 0},                        {0, 0}},    //VoutMux
    {{0, 0},                        {0, 0}},    //Tintern
    {{0, 0},                        {51758, 15230}},    //Vin
    {{64, 2000},                        {64, 2100}},    //Textern

    {{0, 0},                        {48963, 3752}},    //Vb0_pin
    {{0, 0},                        {54656, 4198}},    //Vb1_pin
    {{0, 0},                      {53376, 8068}},  //Vb2_pin
    {{0, 0},                      {54577, 4193}},  //Vb3_pin

    {{0, 0},                      {54976, 4197}},  //Vb4_pin
    {{0, 0},                      {54400, 4197}},  //Vb5_pin
    {{0, 0},                      {54400, 4197}},  //Vb6_pin

    //1-1 correlation
    {{10, 50},                      {20, 1000}},  //IsmpsValue
    {{0, 50},                      {60, 300}},  //IdischargeValue
#ifdef ANALOG_INPUTS_V_UNKNOWN
    {{0, 0},                         {1, 1}},           //UNKNOWN0
    {{0, 0},                         {1, 1}},           //UNKNOWN1
#endif
};



# Sign-Language-to-Text-Converter

## Overview

The **Sign Language to Text Converter** is an innovative project designed to bridge the communication gap between individuals who use American Sign Language (ASL) and those who may not be familiar with it. This system utilizes a combination of Flex Sensors and an accelerometer (ADXL335) to interpret hand gestures in real-time and convert them into text.

![WhatsApp Image 2023-09-14 at 17 56 56](https://github.com/PranayDesamsetti/Sign-Language-to-Text-Converter/assets/126604281/4aa6a74a-db10-4a3f-8f76-87da92b0c254)

## Table of Contents

- [Introduction](#introduction)
- [Components](#components)
- [How It Works](#how-it-works)
- [Flex Sensors](#flex-sensors)
- [Accelerometer (ADXL335)](#accelerometer-adxl335)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Sign Language is a vital means of communication for the Deaf community. This project aims to facilitate communication between Deaf and hearing individuals by providing a tool that can interpret ASL gestures and display them as text. The system interprets hand movements and positions in real-time, making communication more accessible.

## Components

- Arduino Nano
- Flex Sensors
- ADXL335 Accelerometer
- Bread Board and Jumper wires
- Resistors

## How It Works

The Sign Language to Text Converter relies on two key components: Flex Sensors and an accelerometer.

## Flex Sensors

Flex sensors are resistive devices that change their resistance when bent. They are attached to the fingers and detect the degree of finger bending. The Arduino Nano reads these sensor values and converts them into corresponding hand gestures. Each gesture is associated with an ASL sign.

## Accelerometer (ADXL335)

The accelerometer (ADXL335) is used to detect the orientation and movement of the hand. It provides data about the hand's position in three-dimensional space. By analyzing this data, the system can determine the spatial context of each ASL sign.

## Usage

- Connect the hardware components as per the provided circuit diagram.
- Upload the Arduino code to the Arduino Nano.
- Calibrate the system by setting reference values for gestures.
- Start using the Sign Language to Text Converter to interpret ASL signs.

## Note

After a lot of caliberation and prototyping, I optimized the code in a way that it shows a few predefined characters. In order to make it fully functional, we have to add the ASL library and optimize the code accordingly.


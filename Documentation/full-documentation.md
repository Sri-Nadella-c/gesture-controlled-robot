# Wireless Gesture Controlled Robot - Full Documentation

WIRELESS GESTURE CONTROLLED ROBOT

ABSTRACT:

The main objective of our project is to control a robot using gestures of our hand. A Gesture Controlled robot is a kind of robot which can be controlled by human gestures. The basic working principle for our robot is passage of the data signals of accelerometer readings to the microcontroller board fitted on the robot. We need to wear a small transmitting device on our hand which includes an acceleration meter. This will transmit an appropriate command to the robot so that it can do whatever we want. The transmitting device includes a comparator for analog to digital conversion and an encoder to convert the four bit data into serial and then it will transmit by an RF Transmitter module. At the receiving end an RF Receiver module receives the

encoded data and decodes using a decoder. This data is then processed by a microcontroller and

finally sent to the motor driver to control the motors.

This application is mostly used in military applications, industrial robotics, construction vehicles and medical applications for surgery. In these fields, where it is quite complicated to control the robot or a particular machine with remote or switches, this gesture controlled robot would be handful.

TABLE OF CONTENT


## 1. INTRODUCTION



### 1.1 ROBOT



### 1.2 Human Machine Interaction



### 1.3 Gesture



### 1.4 Motivation For Project



### 1.5 Objective of Project



## 2. PROJECT DESCRIPTION



### 2.1 Gesture controlled Robot



### 2.2 Applications



## 3. HARWARE COMPONENTS



### 3.1 Accelerometer


3.1.1 Operation

3.1.2 Pin Configuration


### 3.2 Comparator IC



### 3.3 Voltage regulator



### 3.4 Encoder



### 3.5 RF Module


3.5.1 Transmitter

3.5.2 Receiver


### 3.6 Decoder



### 3.7 Microcontroller


3.7.1 What is Microcontroller?


### 3.8 Motor Driver IC



### 3.9 DC Motor



### 3.10 Wheels



## 4. INTRODUCTION TO EMBEDDED SYSTEM



### 4.1 Embedded System


4.1.1 System design cells

4.1.2 History and Future

4.1.3 Characteristics of Embedded System

4.1.4 Classification of Embedded System

4.1.5 Applications of Embedded System


## 5. IMPLEMENTATION



### 5.1 Transmitter



### 5.2 Receiver



### 5.1 Simulation



## 6. FEASIBILITY OF THE PROJECT



### 6.1 Software Description


6.1.1 Keil


### 6.2 Hardware Description



### 6.3 Economic



## 7. CONCLUSION AND FUTURE WORK



### 7.1 Conclusion



### 7.2 Future Work



## 8. MICROCONTROLLER CODE



## 9. REFERENCES



## 10. OUTPUT


LIST OF FIGURES

Figure 2-1: Block diagram

Figure 3-1: ADXL335 Accelerometer

Figure 3-3 LM324 IC

Figure 3-4: LM7805 PIN

Figure 3-6: RF Transmitter

Figure 3-7: RF Receiver

Figure 3-8: Pin diagram HT12D

Figure 3-9: Crystal Oscillator

Figure 3-10: AT89S51 PIN

Figure 3-11: AT89S51 Block Diagram

Figure 3-12: L293D PIN

Figure 3-13: H-Bridge

Figure 3-14: DC Motor

Figure 4-1: Embedded System design cells

Figure: 5-1: Input and Output of Comparator IC

Figure 5-2 ASK Modulation

Figure 5-3: Transmitting Circuit

Figure 5-4: Receiving Circuit

Figure 5-5: FYP-1 Simulation

Figure 7-1: Hand Movements

LIST OF TABLES

Table 3-1: Description of ADXL335

Table 3-2 Pin description for LM324

Table 3-3 Description of HT12E

Table 3-4: Pin description for RF Transmitter

Table 3-5: description of HT12D

Table 3-6: L293D Pin description

Table 7-1 Accelerometer Orientation


## Chapter 1


INTRODUCTION

INTRODUCTION

Recently, strong efforts have been carried out to develop intelligent and natural interfaces between users and computer based systems based on human gestures. Gestures provide an intuitive interface to both human and computer. Thus, such gesture-based interfaces can not only

substitute the common interface devices, but can also be exploited to extend their functionality.


### 1.1 ROBOT:


A robot is usually an electro-mechanical machine that can perform task automatically. Some robots require some degree of guidance, which may be done using a remote control or with a computer interface. Robots can be autonomous, semi-autonomous or remotely controlled. Robots

have evolved so much and are capable of mimicking humans that they seem to have a mind of

their own.


### 1.2 HUMAN MACHINE INTERACTION:


An important aspect of successful robotic system is the Human-Machine interaction. In the early

years the only way to communicate with a robot was to program which required extensive hard

work. With the development in science and robotics, gesture based recognition came into life. Gestures originate from any bodily motion or state but commonly originate from the face or hand. Gesture recognition can be considered as a way for computer to understand human body

language. This has minimized the need for text interfaces and GUIs (Graphical User Interface).


### 1.3 GESTURE:


A gesture is an action that has to be seen by someone else and has to convey some piece of information. Gesture is usually considered as a movement of part of the body, esp. a hand or the

head, to express an idea or meaning.


### 1.4 MOTIVATION FOR PROJECT:


Our motivation to work on this project came from a disabled person who was driving his wheel

chair by hand with quite a lot of difficulty. So we wanted to make a device which would help such people drive their chairs without even having the need to touch the wheels of their chairs.


### 1.5 OBJECTIVE OF PROJECT:


Our objective is to make this device simple as well as cheap so that it could be mass produced

and can be used for a number of purposes.


## Chapter 2


PROJECT DESCRIPTION

PROJECT DESCRIPTION


### 2.1 OVERVIEW OF THE PROJECT:


Our gesture controlled robot works on the principle of accelerometer which records hand

movements and sends that data to the comparator which assigns proper voltage levels to the recorded movements. That information is then transferred to a encoder which makes it ready for RF transmission. On the receiving end, the information is received wirelessly via RF, decoded and then passed onto the microcontroller which takes various decisions based on the received information. These decisions are passed to the motor driver ic which triggers the motors in different configurations to make the robot move in a specific direction. The following block diagram helps to understand the working of the robot:

Figure: 2-1 Block diagram

Gesture recognition technologies are much younger in the world of today. At this time there is much active research in the field and little in the way of publicly available implementations. Several approaches have been developed for sensing gestures and controlling robots. Glove based technique is a well-known means of recognizing hand gestures. It utilizes a sensor attached

to a glove that directly measures hand movements.

A Gesture Controlled robot is a kind of robot which can be controlled by hand gestures and not the old fashioned way by using buttons. The user just needs to wear a small transmitting device on his hand which includes a sensor which is an accelerometer in our case. Movement of the hand in a specific direction will transmit a command to the robot which will then move in a

specific direction. The transmitting device include a Comparator IC for assigning proper levels

to the input voltages from the accelerometer and an Encoder IC which is used to encode the four

bit data and then it will be transmitted by an RF Transmitter module.

At the receiving end and an RF Receiver module will receive the encoded data and decode it by using a decoder IC. This data is then processed by microcontroller and passed onto a motor driver to rotate the motors in a special configuration to make the robot move in the same

direction as that of the hand.

Gesture recognition enables humans to interface with the machine (HMI) and interact naturally without any mechanical devices. Using the concept of gesture recognition, it is possible to point a finger at the computer screen so that the cursor will move accordingly. In many application of controlling robot it becomes quite hard and complicated when there comes the part of controlling it with remote or many different switches. A gesture controlled robot will become more helpful in these cases.

We divided our task into two parts to make the task easy and simple and to avoid complexity and make it error free. The first is the transmitting section which includes the following components. The second is the receiving end which comprises of following main components:


### 2.2 APPLICATIONS:


Gesture recognition is useful for processing information from humans which is not conveyed through speech or type. As well, there are various types of gestures which can be identified by computers.

Sign language recognition. Just as speech recognition can transcribe speech to text, certain types of gesture recognition software can transcribe the symbols represented through sign language into text.

For socially assistive robotics. By using proper sensors (accelerometers and gyros) worn on the body of a patient and by reading the values from those sensors, robots can assist in patient rehabilitation. The best example can be stroke rehabilitation.

Directional indication through pointing. Pointing has a very specific purpose in our society, to reference an object or location based on its position relative to ourselves. The use of gesture recognition to determine where a person is pointing is useful for identifying the context of statements or instructions. This application is of particular interest in the field of robotics.

Control through facial gestures. Controlling a computer through facial gestures is a useful application of gesture recognition for users who may not physically be able to use a mouse or keyboard. Eye tracking in particular may be of use for controlling cursor motion or focusing on elements of a display.

Alternative computer interfaces. Foregoing the traditional keyboard and mouse setup to interact with a computer, strong gesture recognition could allow users to accomplish frequent or common tasks using hand or face gestures to a camera.

Immersive game technology. Gestures can be used to control interactions within video games to try and make the game player's experience more interactive or immersive.

Virtual controllers. For systems where the act of finding or acquiring a physical controller could require too much time, gestures can be used as an alternative control mechanism. Controlling secondary devices in a car or controlling a television set are examples of such usage.

Affective computing. In affective computing, gesture recognition is used in the

process of identifying emotional expression through computer systems.

Remote control. Through the use of gesture recognition, "remote control with the

wave of a hand" of various devices is possible. The signal must not only indicate the

desired response, but also which device to be controlled.

Through the use of gesture recognition, remote control with the wave of a hand of various

devices is possible.

Gesture controlling is very helpful for handicapped and physically disabled people to

achieve certain tasks, such as driving a vehicle. Gestures can be used to control interactions for entertainment purpose such as gaming to make the game player’s experience more interactive or immersive.


## Chapter 3


HARDWARE DESCRIPTION

HARDWARE DESCRIPTION


### 3.1 ACCELEROMETER (ADXL335)


An Accelerometer is an electromechanical device that measures acceleration forces. The forces may be static, like the constant force of gravity pulling at your feet, or they could be dynamic caused by moving or vibrating the accelerometer. It is a kind of sensor which record acceleration and gives an analog data while moving in X,Y,Z direction or may be X,Y direction only depending on the type of the sensor.

Figure 3-1: ADXL335 Accelerometer

The ADXL335 is a triple axis accelerometer with extremely low noise and power consumption - only 320uA The sensor has a full sensing range of +/-3g.There is no on-board regulation, provided power should be between 1.8 and 3.6VDC. The ADXL335 is a small, thin, low power, complete 3-axis accelerometer with signal conditioned voltage outputs. The product measures acceleration with a minimum full-scale range of ±3 g. It can measure the static acceleration of gravity in tilt-sensing applications, as well as dynamic acceleration resulting from motion, shock, or vibration. The user selects the bandwidth of the accelerometer using the CX, CY, and CZ capacitors at the XOUT, YOUT, and ZOUT pins. Bandwidths can be selected to suit the application, with a range of 0.5 Hz to 1600 Hz for the X and Y axes, and a range of 0.5 Hz to 550 Hz for the Z axis.

3.1.1 Operation of ADXL335:

The ADXL335 is a complete 3-axis acceleration measurement system. The ADXL335 has a Measurement range of ±3 g mini-mum. It contains a poly silicon surface-micro machined sensor and signal conditioning circuitry to implement open-loop acceleration measurement architecture. The output signals are analog voltages that are proportional to acceleration. The accelerometer can measure the static acceleration of gravity in tilt-sensing applications as well as dynamic Acceleration resulting from motion, shock, or vibration. The sensor is a poly silicon surface micro Machined structure built on top of a silicon wafer. Poly silicon springs suspend the

Structure over the surface of the wafer and provide a resistance against acceleration forces. Deflection of the structure is measured using a differential capacitor that consists of independent

Fixed plates and plates attached to the moving mass. The fixed plates are driven by 180° out-of phase square waves. Acceleration deflects the moving mass and unbalances the differential capacitor resulting in a sensor output whose amplitude is proportional to acceleration. Phase sensitive demodulation techniques are then used to determine the magnitude and direction of the acceleration.

Fig 3-2: Block diagram of ADXL335

The demodulator output is amplified and brought off-chip through a 32 kΩ resistor. The user then sets the signal bandwidth of the device by adding a capacitor. This filtering improves measurement resolution and helps prevent aliasing.

3.1.2 Pin Configuration of ADXL335:

Fig 3-3: Pin diagram of ADXL335

Pin description:

NC No Connect.

ST Self-Test.

COM Common.

NC No Connect.

COM Common.

COM Common.

COM Common.

ZOUT Z Channel Output.

NC No Connect.

YOUT Y Channel Output.

NC No Connect.

XOUT X Channel Output.

NC No Connect.

NC No Connect.

VS Supply Voltage (1.8 V to 3.6 V).

NC No Connect.

EP Exposed Pad Not internally connected. Solder for mechanical integrity. Table 3-1: Description of ADXL335


### 3.2 COMPARATOR IC (LM324)


The comparator ic compares the analog voltage received from the accelerometer and compares it with a reference voltage and gives a particular high or low voltage. The received signal is quite noisy and of various voltage levels. This ic compares those levels and outputs in the form of 1 or 0 voltage level. This process is called signal conditioning. The figure shown below is comparator IC. The pins 1, 7, 8 and 14 are output pins. A reference voltage is connected to the negative terminal for high output when input is high or positive terminal for high output when input is low from the LM324 IC.

Figure 3-3 LM324 IC

PIN DESCRIPTION:

Pin No. Symbol Function

Table 3-2 Pin description for LM324


### 3.3 VOLTAGE REGULATOR IC (7805):


As the name itself implies, it regulates the input applied to it. A voltage regulator is an electrical

regulator designed to automatically maintain a constant voltage level. In this project power supply of 5v are required. In order to obtain these voltage levels, 7805 voltage regulators are to

be used, the first number 78 represents positive supply and the numbers 05, represent the required output voltage levels. The L78xx series of three-terminal positive regulators is available in TO-220,TO220fp,TO - 3,D2PAK AND DPAK packages and several fixed output voltages, making it useful in a wide range of applications.

Figure 3-4: LM7805 PIN

These regulators can provide local on-board regulation, eliminating the distribution problems

associated with single point regulation. Each type employs internal current limiting, thermal

shut-down and safe area protection, making is essentially indestructible. If adequate heat sinking

is provided, they can deliver over 1 A output current. Although designed primarily as fixed

voltage regulators, these devices can be used with external components to obtain adjustable

voltage and current.

3.4Encoder (HT12E)

The HT12E encoder is designed for remote control system applications. It will interface to RF

transmitter modules to create a secure single or multiple channel RF remote control Transmitter.

The oscillator is configured simply with the addition of a resistor. It is capable of encoding information which consists of N address bits and 12-N data bits. Each address/data input can be

set to one of the two logic states. The programmed addresses/data are transmitted together with

the header bits via an RF transmission medium upon receipt of a trigger signal.HT12E is an encoder integrated circuit of 212 series of encoders. They are paired with 212 series of decoders for use in remote control system applications. It is mainly used in interfacing RF and

infrared circuits. The chosen pair of encoder/decoder should have same number of addresses and

data format. Simply put, HT12E converts the parallel inputs into serial output. It encodes the 12

bit parallel data into serial for transmission through an RF transmitter. These 12 bits are divided

into 8 address bits and 4 data bits. HT12E has a transmission enable pin which is active low. When a trigger signal is received on TE pin, the programmed addresses/data are transmitted together with the header bits via an RF or an infrared transmission medium. HT12E begins a 4-

word transmission cycle upon receipt of a transmission enable. This cycle is repeated as long as

TE is kept low. As soon as TE returns to high, the encoder output completes its final cycle and

then stops.

Features of HT12E

Operating voltage: 2.4V~12V

Low power and high noise immunity CMOS technology

Low standby current: 0.1uA (typ.) at VDD=5V

Built-in oscillator, needs only 5% resistor

Compatible with the HT12D decoder IC

18-pin DIP

Fig 3-5: Pin diagram of RF-Encoder:

Pin Description:

Table 3-3 Description of HT12E

Application of HT12E

Burglar alarm system

Smoke and fire alarm system

Garage door controllers

Car door controllers

Car alarm system

Security system

Cordless telephones


### 3.5 RF MODULE:


An RF Module is a (usually) small electronic circuit used to transmit, receive, or transceiver radio waves on one of a number of carrier frequencies. RF Modules are widely used in consumer application such as garage door openers, wireless alarm systems, industrial remote controls, smart sensor applications, and wireless home automation systems. They are often used instead of infrared remote controls as they have the advantage of not requiring line-of-sight operation. Several carrier frequencies are commonly used in commercially-available RF modules, including 433.92MHz, 315MHz, 868MHz and 915MHz. The RF module, as the name suggests, operates at Radio Frequency. The corresponding frequency range varies between 30 kHz & 300 GHz. In this RF system, the digital data is represented as variations in the amplitude of carrier wave. This kind of modulation is known as Amplitude Shift Keying (ASK).Transmission through RF is better than IR (infrared) because of many reasons.

Firstly, signals through RF can travel through larger distances making it suitable for long range applications. Also, while IR mostly operates in line-of-sight mode, RF signals can travel even when there is an obstruction between transmitter & receiver. Next, RF transmission is more strong and reliable than IR transmission. RF communication uses a specific frequency unlike IR signals which are affected by other IR emitting sources. This RF module comprises of an RF Transmitter and an RF Receiver. The transmitter/receiver (Tx/Rx) pair operates at a frequency of 434 MHz An RF transmitter receives serial data and transmits it wirelessly through RF through its antenna connected at pin4. The transmission occurs at the rate of 1Kbps - 10Kbps.The transmitted data is received by an RF receiver operating at the same frequency as that of the transmitter. The RF module is often used along with a pair of encoder/decoder. The encoder is used for encoding parallel data for transmission feed while reception is decoded by a decoder. HT12E-HT12D, HT640-HT648, etc. are some commonly used encoder/decoder pair ICs.

3.5.1 RF-Transmitter:

Radio transmitter design is a complex topic which can be broken down into a series of smaller

topics. A radio communication system requires two tuned circuits each at the transmitter and receiver, all four tuned to the same frequency. The transmitter is an electronic device which, usually with the aid of an antenna, propagates an electromagnetic signal such as radio, television, or other telecommunications.

Arrangement of RF-Transmitter:

The transmitting system consists of two tuned circuits such that the one containing the spark-gap is a persistent oscillator; the other, containing the aerial structure, is a free radiator maintained in oscillation by being coupled to the first (Nikola Tesla and Guglielmo Marconi).

The oscillating system, including the aerial structure with its associated inductance-coils and condensers, is designed to be both a sufficiently persistent oscillator and a sufficiently active radiator (Oliver Lodge).

Figure 3-6: RF Transmitter

The transmitting system consists of two electrically coupled circuits, one of which, containing the air-gap, is a powerful but not persistent oscillator, being provided with a device for quenching the spark so soon as it has imparted sufficient energy to the other circuit containing the aerial structure, this second circuit then independently radiating the train of slightly damped waves at its own period (Oliver Joseph Lodge and Wilhelm Wien).

Pin description

Table 3-4: Pin description for RF Transmitter

3.5.2 RF-Receiver:

The RF receiver is specially designed to receive the signal from the RF transmitter to demodulate

or decode the original signal. For receiving we use receiver and for decoding we use the IC

HT12D.

Figure 3-7: RF Receiver


### 3.6 RF- DECODER (HT12D):


HT12D is a decoder integrated circuit that belongs to 212 series of decoders. This series of decoders are mainly used for remote control system applications, like burglar alarm, car door

controller, security system etc. It is mainly provided to interface RF and infrared circuits. They

are paired with 212 series of encoders. The chosen pair of encoder/decoder should have same

number of addresses and data format. In simple terms, HT12D converts the serial input into parallel outputs. It decodes the serial addresses and data received by, say, an RF receiver, into

parallel data and sends them to output data pins. The serial input data is compared with the local

addresses three times continuously.

The input data code is decoded when no error or unmatched codes are found. A valid transmission in indicated by a high signal at VT pin.HT12D is capable of decoding 12 bits, of which 8 are address bits and 4 are data bits. The data on 4 bit latch type output pins remain unchanged until new is received. The decoders receive serial addresses and data from a programmed 212 series of encoders that are transmitted by a carrier using an RF or an IR transmission medium. They compare the serial input data three times continuously with their local addresses. If no error or unmatched codes are found, the input data codes are decoded and

then transferred to the output pins. The VT pin also goes high to indicate a valid transmission.

The 212 series of decoders are capable of decoding information that consist of N bits of address

and 12-N bits of data. Of this series, the HT12D is arranged to provide 8 address bits and 4 data

bits, and HT12F is used to decode 12 bits of address information.

Pin diagram of RF-Decoder:

Figure 3-8: Pin diagram HT12D

Pin Description:


### 3.7 MICROCONTROLLER (AT89S51):


Features

Compatible with MCS®-51 Products

4K Bytes of In-System Programmable (ISP) Flash Memory – Endurance: 10,000 Write/Erase  Cycles 5.5V Operating Range.

Fully Static Operation: 0 Hz to 33 MHz

Three-level Program Memory Lock

128 x 8-bit Internal RAM

32 Programmable I/O Lines

Two 16-bit Timer/Counters

Six Interrupt Sources

Full Duplex UART Serial Channel

Low-power Idle and Power-down Modes

Interrupt Recovery from Power-down Mode

Watchdog Timer

Dual Data Pointer

Power-off Flag

Fast Programming Time

Flexible ISP Programming (Byte and Page Mode)

Green (Pb/Halide-free) Packaging Option

MICROCONTROLLER DESCRIPTION:

The AT89S51 is a low-power, high-performance CMOS 8-bit microcontroller with 4K bytes of In-System Programmable Flash memory. The device is manufactured using Atmel’s high-density nonvolatile memory technology and is compatible with the industry-standard 80C51 instruction set and pin out. The on-chip Flash allows the program memory to be reprogrammed in-system or by a conventional nonvolatile memory programmer. By combining a versatile 8-bit CPU with In- System Programmable Flash on a monolithic chip, the Atmel AT89S51 is a powerful microcontroller which provides a highly-flexible and cost-effective solution to many embedded control applications. The AT89S51 provides the following standard features: 4K bytes of Flash, 128 bytes of RAM, 32 I/O lines, Watchdog timer, two data pointers, two 16-bit timer/counters, a five-vector two-level interrupt architecture, a full duplex serial port, on-chip oscillator, and clock circuitry.

In addition, the AT89S51 is designed with static logic for operation down to zero frequency and supports two software selectable power saving modes. The Idle Mode stops the

CPU while allowing the RAM, timer/counters, serial port, and interrupt system to continue functioning. The Power-down mode saves the RAM contents but freezes the oscillator, disabling

all other chip functions until the next external interrupt or hardware reset.

Microprocessors and microcontrollers are widely used in embedded systems products.

Microcontroller is a programmable device. A microcontroller has a CPU in addition to a fixed

amount of RAM, ROM, I/O ports and a timer embedded all on a single chip. The fixed amount

of on chip ROM, RAM and number of I/O ports in microcontrollers make them ideal for much

application in which space and cost are space critical.

The Intel 8051 is Harvard architecture, single chip microcontroller. Which was developed by Intel in 1980 for using embedded systems? It was popular in the 1980s and early 1990s, but today it has largely been suppressed by a vast range of enhanced devices with 8051-compatible

processor cores that are manufactured by more than 20 independent manufacturers including

Atmel, Infineon technologies and maxim integrated products

8051 An 8-bit processor, meaning that the CPU can work only 8-bits of data at a time. Data larger then 8-bits has to be broken into 8-pices to be processed by the CPU. 8051 is available in different memory types such as UV-EPROM, flash and NV-RAM .the microcontroller used in this project is P89V51RD2. Philips Corporation introduced this 89C51 microcontroller. The present project is implemented on keil vision. In order to program the device, preload tool has been used to burn the program on to the microcontroller. The features, pin description of the microcontroller and the software tools used are discussed in the following sections.

3.7.1 WHAT IS MICROCONTROLLER :

A microcontroller (often abbreviated MCU) is a single computer chip (integrated circuit) that executes a user program, normally for the purpose of controlling some device hence the name “microcontroller. The program is normally contained either in a second chip, called an EPROM, or within the same chip as the microcontroller itself. A microcontroller is normally found in devices such as microwave ovens, automobiles, keyboards, cd players, cell phones, security systems, time and attendance clocks etc.

Microcontrollers are used in devices that require some amount of computing power but

don’t require as much computing power as that provided by a complex (and expensive) 486 or

Pentium system which generally require a large amount of supporting circuitry. Microwave oven just does not need that much computing power. microcontroller based system generally smaller, more reliable and cheaper .they are ideal for the types of applications described above where cost and unit size are very important consideration .in such applications it is almost always desirable to produce always that requires the smallest number of integrated circuit that require the smallest amount of physical space, require the least amount of energy and cost as little as possible. For reasons such as safety and usability; others may have low or no performance requirements, allowing the system hardware to be simplified to reduce costs.

A crystal oscillator is attached to the pins 18 and 19 of the microcontroller. The oscillator creates an electrical signal of a very precise frequency which is used to keep track of time. Two

capacitors are connected in parallel with the oscillator to remove unwanted frequencies.

Figure 3-9: Crystal Oscillator

The processing is the most important part of the robot. Till now we get the data from the decoder. Based on that data decisions have to be made. So here the role of microcontroller comes up. We used a microcontroller for our robot to give it a decision capability. Our microcontroller is made up by Atmel and the product name is AT89C51. Port 1 works as an input port while Port 2 is working as output port for our program.


### 3.7 PIN CONFIGURATION:


Figure 3-10: AT89S51 PIN

Figure 3-11: AT89S51 Block Diagram

PIN DESCRIPTION:


### 4.1 VCC Supply voltage.



### 4.2 GND Ground.



### 4.3 Port 0: Port 0 is an 8-bit open drain bi-directional I/O port. As an output port, each pin can


sink eight TTL inputs. When 1s are written to port 0 pins, the pins can be used as high WIRELESS impedance inputs. Port 0 can also be configured to be the multiplexed low-order address/data bus during accesses to external program and data memory. In this mode, P0 has internal pull-ups. Port 0 also receives the code bytes during Flash programming and outputs the code bytes during program verification. External pull-ups are required during program verification.


### 4.4 Port1: Port 1 is an 8-bit bi-directional I/O port with internal pull-ups. The Port 1 output buffers can sink/source four TTL inputs. When 1s are written to Port 1 pins, they are pulled high


by the internal pull-ups and can be used as inputs. As inputs, Port 1 pins that are externally being

pulled low will source current (IIL) because of the internal pull-ups. Port 1 also receives the low order address bytes during Flash programming and verification.


### 4.5 Port 2: Port 2 is an 8-bit bi-directional I/O port with internal pull-ups. The Port 2 output buffers can sink/source four TTL inputs. When 1s are written to Port 2 pins, they are pulled high


by the internal pull-ups and can be used as inputs. As inputs, Port 2 pins that are externally being

pulled low will source current (IIL) because of the internal pull-ups. Port 2 emits the high-order

address byte during fetches from external program memory and during accesses to external data

memory that use 16-bit addresses (MOVX @ DPTR). In this application, Port 2 uses strong internal pull-ups when emitting 1s. During accesses to external data memory that use 8-bit addresses (MOVX @ RI), Port 2 emits the contents of the P2 Special Function Register. Port 2

also receives the high-order address bits and some control signals during Flash programming and

verification.


### 4.6 Port 3: Port 3 is an 8-bit bi-directional I/O port with internal pull-ups. The Port 3 output buffers can sink/source four TTL inputs. When 1s are written to Port 3 pins, they are pulled high


by the inter Port Pin Alternate Functions P1.5 MOSI (used for In-System Programming) P1.6 MISO (used for In-System Programming) P1.7 SCK (used for In-System Programming) 5 2487D–MICRO–6/08 AT89S51 nal pull-ups and can be used as inputs. As inputs, Port 3 pins

that are externally being pulled low will source current (IIL) because of the pull-ups. Port 3 receives some control signals for Flash programming and verification. Port 3 also serves the functions of various special features of the AT89S51, as shown in the following table.


### 4.7 RST: Reset input. A high on this pin for two machine cycles while the oscillator is running


resets the device. This pin drives High for 98 oscillator periods after the Watchdog times out.

The DISRTO bit in SFR AUXR (address 8EH) can be used to disable this feature. In the default

state of bit DISRTO, the RESET HIGH out feature is enabled.


### 4.8 ALE/PROG: Address Latch Enable (ALE) is an output pulse for latching the low byte of the


address during accesses to external memory. This pin is also the program pulse input (PROG) during Flash programming. In normal operation, ALE is emitted at a constant rate of 1/6 the oscillator frequency and may be used for external timing or clocking purposes. Note, however,

that one ALE pulse is skipped during each access to external data memory. If desired, ALE operation can be disabled by setting bit 0 of SFR location 8EH. With the bit set, ALE is active

only during a MOVX or MOVC instruction. Otherwise, the pin is weakly pulled high. Setting the

ALE-disable bit has no effect if the microcontroller is in external execution mode.


### 4.9 PSE:N Program Store Enable (PSEN) is the read strobe to external program memory. When


the AT89S51 is executing code from external program memory, PSEN is activated twice each

machine cycle, except that two PSEN activations are skipped during each access to external data

memory.


### 4.10 EA/VPP: External Access Enable. EA must be strapped to GND in order to enable the device to fetch code from external program memory locations starting at 0000H up to FFFFH.


Note, however, that if lock bit 1 is programmed, EA will be internally latched on reset. Port Pin

Alternate Functions P3.0 RXD (serial input port) P3.1 TXD (serial output port) P3.2 INT0 (external interrupt 0) P3.3 INT1 (external interrupt 1) P3.4 T0 (timer 0 external input) P3.5 T1

(timer 1 external input) P3.6 WR (external data memory write strobe) P3.7 RD (external data memory read strobe) 6 2487D–MICRO–6/08 AT89S51 EA should be strapped to VCC for internal program executions. This pin also receives the 12-volt programming enable voltage (VPP) during Flash programming.


### 4.11 XTAL1: Input to the inverting oscillator amplifier and input to the internal clock operating


circuit


### 4.12 XTAL2: Output from the inverting oscillator amplifier.



### 3.8 MOTOR DRIVER IC (L293D):


L293D is a dual H-bridge motor driver integrated circuit (IC). Motor drivers act as current amplifiers since they take a low-current control signal and provide a higher-current signal. This higher current signal is used to drive the motors. It is also known as H-Bridge or Actuator IC. Actuators are those devices which actually gives the movement to do a task like that of a motor. In the real world there are different types of motors available which work on different voltages. So we need a motor driver for running them through the controller. The output from the microcontroller is a low current signal. The motor driver amplifies that current which can control

and drive a motor. In most cases, a transistor can act as a switch and perform this task which drives the motor in a single direction.

L293D contains two inbuilt H-bridge driver circuits. In its common mode of operation, two DC motors can be driven simultaneously, both in forward and reverse direction. The motor

operations of two motors can be controlled by input logic at pins 2 & 7 and 10 & 15. Input logic

00 or 11 will stop the corresponding motor. Logic 01 and 10 will rotate it in clockwise and anticlockwise directions, respectively.

Enable pins 1 and 9 (corresponding to the two motors) must be high for motors to start operating. When an enable input is high, the associated driver gets enabled. As a result, the outputs become active and work in phase with their inputs. Similarly, when the enable input is low, that driver is disabled, and their outputs are off and in the high-impedance state.

Pin Diagram:

Figure 3-12: L293D PIN

Turning a motor ON and OFF requires only one switch to control a single motor in a single direction. We can reverse the direction of the motor by simply reversing its polarity. This can be

achieved by using four switches that are arranged in an intelligent manner such that the circuit

not only drives the motor, but also controls its direction. Out of many, one of the most common

and clever design is a H-bridge circuit where transistors are arranged in a shape that resembles

the English alphabet "H".

Figure 3-13: H-Bridge

As seen in the image, the circuit has four switches A, B, C and D. Turning these switches ON

and OFF can drive a motor in different ways.

A and D are on, motor rotates clockwise.

B and C are on, the motor rotates anti-clockwise.

A and B are on, the motor will stop.

A &C at the same time or B &D at the same time shorts the entire circuit.

So, never try to do it.

Pin Description:

Table 3-6: L293D Pin description


### 3.9 DC MOTORS:


There are several different types of motors. Each motor type has several advantages as well as disadvantages depending on a particular robots design. In our project we use the D.C motors which are very easy to use, but like most other motors their usefulness for robotics is very dependent on the gearing available. DC-motors are made much more effective if they have an

efficient gear ratio for a particular task. If your priority is to have a fast spinning motor and torque is of little concern a low gearing or even no gearing may be what you need; however, most motors used in robots need torque over top speed so a motor with a high gear ratio could be

more useful. The control of a DC motor can be split into two parts: speed and direction. A machine that converts DC power into mechanical power is known as DC motor. Its operation is based on the principle that when a current carrying conductor is placed in a magnetic field, the conductor experiences a mechanical force.

DC motors have a revolving armature winding but non-revolving armature magnetic field and a stationary field winding or a permanent magnet. Different connections of the field and armature winding provide different speed/torque regulation features. The speed of the DC motor can be controlled by changing the voltage applied to the armature or by changing the field current.

Figure 3-14: DC Motor


### 3.10 Wheels:


Wheeled robots are robots that navigate around the ground using motorized wheels to propel them. This design is simpler than using treads or legs and by using wheels they are easier to design, build, and program for movement in flat, not-so-rugged terrain. They are also better

controlled than other types of robots. Disadvantages of wheeled robots are that they cannot navigate well over obstacles, such as rocky terrain, sharp declines, or areas with low friction. Wheeled robots are most popular among the consumer market, their differential steering provides low cost and simplicity. Robots can have any number of wheels, but three wheels are

sufficient for static and dynamic balance. Additional wheels can add to balance; however, additional mechanisms will be required to keep all the wheels in the ground, when the terrain is

not flat. When buying (or making) your wheels you want to put your motor into consideration.

For a start, there is torque and velocity. Large diameter wheels give your robot low torque but

high velocity. So if you already have a very strong motor, then you can use wheels with larger

diameters. Servo's already have good torque, so you should use larger diameter wheels. But if

your motor is weak (such as if it does not have any gearing), you want to use a much smaller

diameter wheel. This will make your robot slower, but at least it has enough torque to go up a

hill! Another dumb mistake someone can make is buying a wheel that has a diameter close to or

less than the motor diameter. For example, if you have a 1" diameter motor, and a 1.5" diameter

wheel, you have a .25" ground clearance ( (1.5"-1")/2=.25" ). How high is the tallest object you

want to go over?

Types of wheels:

2 wheeled robot

3 wheeled robot

4 wheeled robot

5 or more wheeled robot

In our project we use 3 wheeled robots.

3-Wheeled robot

3-wheeled robots may be of two types: differentially steered (2 powered wheels with an

additional free rotating wheel to keep the body in balance) or 2 wheels powered by a single

source and a powered steering for the third wheel. In the case of differentially steered wheels, the

robot direction may be changed by varying the relative rate of rotation of the two separately

driven wheels. If both the wheels are driven in the same direction and speed, the robot will go

straight. Otherwise, depending on the speed of rotation and its direction, the center of rotation

may fall any were in the line join the two wheels.

Fig: 3-15: Wheeled Robot

The center of gravity in this type of robot has to lay inside the triangle formed by the wheels.

If too heavy of a mass is mounted to the side of the free rotating wheel, the robot will tip over.

Chassis:

A chassis consists of an internal framework that supports a man-made object. It is analogous toan animal's skeleton. An example of a chassis is the under part of a motor vehicle, consisting ofthe frame (on which the body is mounted) with the wheels and machinery. We use the chassis tomaintain the bot of robot which is made of the aluminum sheet and the RF receiver is mountedon it to receive the signal.


## Chapter 4


INTRODUCTION TO EMBEDDED SYSTEM

INTRODUCTION TO EMBEDDED SYSTEM


### 4.1 Embedded System:


An embedded system is a combination of computer hardware and software, and perhaps additional mechanical or other parts, designed to perform a specific function. a good example is microwave oven. Almost every household has one, and tens of millions of them are used every day, but very few people realize that a processer and software are involved in the preparation of their lunch or dinner.

This is in direct contrast to the personal computer in the family room. It too is comprised of computer hardware and software and mechanical components(disk drives, for example).however, a personal computer is not designed to perform a specific function rather ;it is able to do many different things many people use the term general-purpose computer to make this distinction clear. As shipped, a general-purpose computer is a blank slate; the manufacturer does not know what the customer will do wish it. one customer may use it for a network file server another may use it exclusively for playing games, and a third may use it to write the next great American novel.

Frequently, an embedded system is a component with in some larger system. For example, modern cars and trucks contain many embedded systems. One embedded systems controls the anti-lock brakes, other monitors and controls the vehicle’s emissions, and a third displays information on the dash board. in some cases , these embedded systems are connected by some sort of communication network, but that is certainly not a requirement.

At the possible risk of confusing you, it is important to point out that a general-purpose computer is itself made up of numerous embedded systems. For example, my computers consist of a keyboard, mouse, video card, modem, hard drive. For example the modem is designed to send and receive digital data over analog telephone line. That’s it and all of the other devices can be summarized in a single sentence as well.

If an embedded system is designed well, the existence of the software and the processor could be completely unnoticed by the user of the device. Such is the case for a micro wave oven, VCR, or alarm clock. In some cases, it would even be possible to build an equivalent device that does not contain the processor and the software. This could be done by replacing the combination with a custom integrated circuit that performs the same functions in the hardware. However a lot of flexibility is lost when a design is hard-cooled in this way. It is much easier, and cheaper, to change a few lines of software than to redesign a piece of custom hardware.

4.1.1 System design cells:

Figure 4-1: Embedded System design cells

4.1.2 HISTORY AND FUTURE:

Given the definition of embedded systems earlier is this chapter; the first such systems could not possibly have appeared before 1971. That was the year Intel introduced the world’s first microprocessor. This chip, the 4004, was designed for use in a line of business calculators produced by the Japanese company Busicom. In 1969, Bascom asked Intel to design a set of custom integrated circuits-one for each of their new calculator models. The 4004 was Intel’s response rather than design custom hard ware for each calculator, Intel proposed a general purpose circuit that could be used throughout the entire line of calculators. Intel’s idea was that the software would give each calculator its unique set of features.

The microcontroller was an overnight success, and it use increased steadily over the next decade. Early embedded applications included unmanned space probes, computerized traffic lights, and air craft flight control systems. In the 1980s,embedded systems quietly rode the waves

of the micro computer age and brought microprocessors into every part of our kitchens(bread machines, food processors and microwave ovens),living rooms(televisions, stereos and remote controls),and work places(fax machines, pagers, laser printers, cash registers, and credit card readers).

It seems inevitable that the number of embedded systems will continue to increase rapidly. Already these are promising new embedded devices that have enormous market potential; light switches and thermo states that can be central computer, intelligent air-space bag systems that don’t inflate when children or small adults are present, pal-sized electronic organizers and personal digital assistants (PDAs),digital cameras and dash board navigation systems. Clearly individuals who possess the skills and desire to design the next generation of embedded systems will be in demand for quiet sometime.

4.1.3 CHARACTERISTICS OF EMBEDDED SYSTEMS:

Embedded systems do a very specific task; they can’t be programmed to do different things.

Embedded systems have limited resources, particularly the memory. Generally, they don’t have secondary storage device such as CDROM or the floppy disk.

Embedded systems have to work against some deadlines .a specific job has to complete with in specific time.

Embedded systems are constrained for power. As many embedded systems operate through a battery, the power consumption has to be very low.

Embedded system need to be highly reliable .once in a while, pressing ALT+CRTL+DEL is ok in your desktops, but you can’t afford to reset your embedded system.

Some embedded systems have to operate in the extreme environmental conditions such as very high temperatures and humidity.

4.1.4 Classification of Embedded Systems:

Real Time Systems.

RTS is one which has to respond to events within a specified deadline.

A right answer after the dead line is a wrong answer.

RTS CLASSIFICATION:

Hard Real Time Systems

Soft Real Time System

HARD REAL TIME SYSTEM:

"Hard" real-time systems have very narrow response time.

Example: Nuclear power system, Cardiac pacemaker.

SOFT REAL TIME SYSTEM:

"Soft" real-time systems have reduced constrains on "lateness" but still must operate very

quickly and repeatable.

Example: Railway reservation system – takes a few extra seconds the data remains valid.

4.1.5 Applications of Embedded systems:

Military and aerospace embedded software applications

Communication Applications

Industrial automation and process control software

Mastering the complexity of applications.

Reduction of product design time.

Real time processing of ever increasing amounts of data.

Intelligent, autonomous sensors.


## Chapter 5


IMPLEMENTATION

IMPLEMENTATION

The accelerometer records the hand movements in the X and Y directions only and outputs Constant analog voltage levels. These voltages are fed to the comparator IC which compares it with the references voltages that we have set via variable resistors attached to the IC. The levels that we have set are 1.7V and 1.4V. Every voltage generated by the accelerometer is compared with these and an analog 1 or 0 signal is given out by the comparator IC.

Figure: 5-1: Input and Output of Comparator IC

This analog signal is the input to the encoder IC. The input to the encoder is parallel while the Output is a serial coded waveform which is suitable for RF transmission. A push button isattached to pin 14 of this IC which is the Transmission Enable (TE) pin. The coded data will be

passed onto the RF module only when the button is pressed. This button makes sure no data is transmitted unless we want to. The RF transmitter modulates the input signal using Amplitude Shift Keying (ASK) modulation. It is the form of modulation that represents digital data as variations in the amplitude of a carrier wave.

The following figure shows the modulated output of the RF module:

Figure 5-2 ASK Modulation

The RF modules works on the frequency of 315MHz. It means that the carrier frequency of the

RF module is 315MHz. The RF module enables the user to control the robot wirelessly and with

ease.


### 5.1 TRANSMITTER:


As we are using hand gestures to make a robot move in specified direction, there should some device to sense the tilt given by hand. Such a device is “ACCELEROMETER”. It senses the given tilt by the hand and converts into analog voltage. In order to make a robot move, the motors inputs should be in digital form of 1’s and 0’s. So to convert this analog voltage into digital form, we make use of “COMPARATOR”. It compares the accelerometer voltage with the

reference voltage and gives the input either logical high or logical low voltage. After converting these voltages, these bits are encoded using an “ENCODER”. Encoder converts these parallel bits into serial form so that we can transmit the bits serially. The output of encoder is given to “RF MODULE TRANSMITTER”. It transmits the bits via antenna into free space using a carrier

frequency of 434 MHz. Transmitter module is held on our hand.

The schematic of transmitting end can be seen below:

Figure 5-3: Transmitting Circuit

This transmitted signal is received by the RF receiver, demodulated and then passed onto the Decoder IC. The decoder IC decodes the coded waveform and the original data bits are recovered. The input is a serial coded modulated waveform while the output is parallel. The pin 17 of the decoder IC is the Valid Transmission (VT) pin. A led can be connected to this pin which will indicate the status of the transmission. In the case of a successful transmission, the led

will blink. The parallel data from the encoder is fed to the port 1of the microcontroller. This data is in the form of bits. The microcontroller reads these bits and takes decisions on the basis of these bits. What the microcontroller does is, it compares the input bits with the coded bits which are burnt into the program memory of the microcontroller and outputs on the basis of these bits. Port 2 of the microcontroller is used as the output port. Output bits from this port are forwarded to the motor driver IC which drives the motors in a special configuration based on the hand movements.

At a dead stop, a motor produces no voltage. If a voltage is applied and the motor begins to spin, it will act as a generator that will produce a voltage that opposes the external voltage applied to it. This is called Counter Electromotive Force (CEF) or Back Electromotive Force (Back EMF). If a load stops the motors from moving then the current may be high enough to burn out the motor coil windings. To prevent this, fly back diodes are used. They prevent the back emf from increasing and damaging the motors.


### 5.2 RECEIVER:


The “RF MODULE RECEIVER” receives these bits and gives as input to the “DECODER”. Decoder performs the reverse action of encoder. It converts serial bits into parallel bits. These parallel bits are given as input to the “MICROCONTROLLER”. A program is written in keil and

is dumped into microcontroller using a universal dumper. Depending upon the code written, microcontroller gives output by considering input bits. The output of controller is given to “MOTOR DRIVER” which drives the motors in required direction. Receiver module is placed on the robot.

The schematic of receiving end can be seen below:

Figure 5-4: Receiving Circuit


### 5.3 SIMULATION:


We performed a simulation of our project in PROTEUS and the code was written in C language using KEIL MICROVISION. We wrote a code for the microcontroller to run DC motors using the H-Bridge IC (L293D). In the simulation we sent the relevant data to the Microcontroller (AT89C51) through switches. The Microcontroller processed the data and sent the information to

the Actuator IC (L293D). The Actuator IC upon receiving information showed response by driving the DC motors. The simulation schematic is as follow:

Figure 5-5: FYP-1 Simulation


## Chapter 6


FEASIBILITY OF THE PROJECT

FEASIBILITY OF THE PROJECT

During the development of the project we researched the feasibility in different fields, speciallysoftware and hardware. The feasibility study is shown below.


### 6.1 SOFTWARE:


We targeted to choose a language that is easy to understand and program. So we chose assemblylanguage for our project. Assembly language is the basic language of microcontrollers. Althoughits not user friendly in terms of programming but still one can learn it quickly. As we have to embed a program into microcontroller, we have to use software tool to write the program. One such software tool is “KEIL”.

6.1.1 KEIL:

Keil compiler is software used where the machine language code is written and compiled. Aftercompilation, the machine source code is converted into hex code which is dumped into the microcontroller for further processing. Keil compiler also supports C language code.

Steps To Write An Assembly Language Program In Keil And How To Compile It:

Install the keil software in the PC in any of the drives.

After installation, an icon will be created with the name ”Keil u Vision3”.Just drag this icon on to the desktop so that it becomes easy whenever you try to write programs in Keil.

Double click on this icon to start the keil compiler.

A page opens with different options in it showing the project workspace at the left most corner side, output window in the bottom and an ash colored space for the program to be written.

Now to start using the keil, click on the option “project”.

A small window opens showing the options like new project, open project, import project etc. click on “New project”.

A small window with the title bar “create new project” opens. The window asks the user to give the project name with which it should be created and the destination location. The project can be created in any of the drives available. you can create a new folder or can directly create a new file.

After the file is saved in the given destination location, a window opens where a list of vendors will be displayed and you have to select the device for the target you have created.

The most widely used vendor is Atmel. So click on Atmel and now the family of microcontrollers manufactured by Atmel opens. You can select any one of the microcontrollers according to the requirement.

When you click on any one of the microcontrollers, the features of that particular microcontroller will be displayed on the right side of the page. The most appropriate microcontroller with which most of the projects can be implemented is the AT89C51.Click on this microcontroller and has a look at its features. Now click on “OK” to select this microcontroller

A small window opens asking whether to copy the startup code into the file you have created just now. just click on “NO” to proceed further.

Now you can see the “TARGET” and SOURCE GROUP created in the project workspace.

Now click on “file” and in that “new”. A new page opens and you can start writing program in it.

After the program is completed, save it with any name but with the .as extension. Save the program in the file you have created earlier.

you can notice that after you save the program, the predefined keywords will be highlighted in bold letters.

Now add this file to the target by giving a right click on the source group. A list of options open and in that selects “add files to the source group”. Check for this file where you have saved and add it.

Write click on the target and select the first option “options for target”. A window opens with different options like device, target, output etc. first click on “target”

since the set frequency of the microcontroller is 11.0592 MHz to interface with the pc, just enter this frequency value in the Xtal (MHz).text area and put a tick on the Use on chip ROM. this is because the program what we write here in the keil will later the dumped into the microcontroller and will be stored in the inbuilt ROM in the microcontroller.

Now click the option “Output” and give any name to the hex file to be created in the “Name of executable” text area and put a tick to the “Create HEX file” option present in the same window. The hex file can be created in any of the drives. You can change the folder by clicking on the “Select folder for Objects”.

Now to check whether the program you have written is error less are not, click on the icon exactly below the ”Open file” icon which is nothing but build Target icon. You can even use the short cut key F7 to compile the program written.

To check for the output, there are several windows like serial window, serial window, project window etc. depending on the program you have written, select the appropriate window to see the output by entering into debug mode.

The icon with the letter “d” indicates the debug mode.

Click on this icon and now click on the option “View” and select the appropriate window to check for the output.

After this is done, click the icon “debug” again to come out of the debug mode. The hex file created as shown earlier will be dumped into the microcontroller with the help of a device called universal programmer.


### 6.2 HARDWARE:


We chose accelerometer as the sensing device because it records even the minute movements.We could also have completed our project using Arduino but chose microcontroller insteadbecause its cost is low and is easily available everywhere. There are a number of dc gearedmotors available but the ones we chose are capable of supporting loads up to 6kgs.


### 6.3 EXPENSES:


This project is quite cost effective. The components used are easily available in the market apart from accelerometer, RF modules and the motors. These components are quite cheap as compared to the motors which are the only expensive part in our whole project. But these particular motors are capable of providing support to loads up to 6kgs which is what we wanted.


## Chapter 7


CONCLUSION AND FUTURE WORK

CONCLUSION AND FUTURE WORK


### 7.1 CONCLUSION:


We achieved our objective without any hurdles i.e. the control of a robot using gestures. The robot is showing proper responses whenever we move our hand. Different Hand gestures to make the robot move in specific directions are as follow:

Figure 7-1: Hand Movements

The robot only moves when the accelerometer is moved in a specific direction. The

validmovements are as follows:

Table 7-1 Accelerometer Orientation


### 7.2 LIMITATIONS AND FUTURE WORK:


The on-board batteries occupy a lot of space and are also quite heavy. We can either use some alternate power source for the batteries or replace the current DC Motors with ones which require less power.

Secondly, as we are using RF for wireless transmission, the range is quite limited; nearly 50-80m. This problem can be solved by utilizing a GSM module for wireless transmission. The GSM infrastructure is installed almost all over the world. GSM will not only provide wireless connectivity but also quite a large range.

Thirdly, an on-board camera can be installed for monitoring the robot from far away places. All we need is a wireless camera which will broadcast and a receiver module which will provide live streaming.


## Chapter 8


MICROCONTROLLER CODE

CODE:

#include<reg51.h>

#define rf_data P1

sbit buzzer = P2^7;

/** l293d connectionc***///

sbit in1 = P2^2;

sbit in2 = P2^3;

sbit in3 = P2^4;

sbit in4 = P2^5;

sbit en1 = P2^0;

sbit en2 = P2^1;

void delay(unsigned int value) /* This function produces a delay in msec.*/

{

unsigned int i,j; /* Delay var */

for(i=0;i<=value;i++)

for(j=0;j<=200;j++); /* Delay for 500 Counts */

}

void main()

{

delay(20);

en1=en2=0;

in1=in3=0;

in2=in4=0;

delay(200);

while(rf_data==0);

buzzer = 0;

delay(100);

buzzer = 1;

while(1)

{

if(rf_data==0xfe) /// front

{

en1=en2=1;

in1=in3=1;

in2=in4=0;

}

else

if(rf_data==0xfd) /// back

{

en1=en2=1;

in1=in3=0;

in2=in4=1;

}

else

if(rf_data==0xfb) /// left

{

en1=1;

en2=0;

in1=1;

in3=0;

in2=0;

in4=0;

}

else

if(rf_data==0xf7) /// right

{

en1=0;

en2=1;

in1=0;

in3=1;

in2=0;

in4=0;

}

else

if(rf_data==0xff) /// stop

{

en1=0;

en2=0;

in1=0;

in3=0;

in2=0;

in4=0;

}

}

}


## Chapter 9


REFERNCES

REFERENCES

[1] “Gesture Controlled Robot PPT” <http://seminarprojects.com/s/hand-gesture-controlled-robot-ppt>

[2] “Gesture Controlled Tank Toy User Guide” <http://www.slideshare.net/neeraj18290  /wireless-gesture-controlled-tank-toy-transmitter>

[3] “Embedded Systems Guide (2002)” <http://www.webstatschecker.com/stats/keyword/

a_hand_gesture_based_control_interface_for_a _car_robot>

[4] “Robotic Gesture Recognition (1997)” by Jochen Triesch and Christoph Von Der Malsburg <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.37.5427>

[5] “Real-Time Robotic Hand Control Using Hand Gestures” by Jagdish Lal Raheja, Radhey  Shyam, G. Arun Rajsekhar and P. Bhanu Prasad

[6] “Hand Gesture Controlled Robot” by Bhosale Prasad S., Bunage Yogesh B. and Shinde Swapnil V.

[7]< http://www.robotplatform.com/howto/L293/motor_driver_1.html>

[8]< http://en.wikipedia.org/wiki/Gesture_interface>

[9]< http://www.wisegeek.com/what-is-a-gear-motor.htm>

[10]<http://www.scribd.com/doc/98400320/InTech-Real-Time-Robotic-Hand-Control-Using-Hand-Gestures>

[11]< http://en.wikipedia.org/wiki/DC_motor>

[12]<http://electronics.stackexchange.com/questions/18447/what-is-back-emf- counter Electro

motive- force>

[13]< http://en.wikipedia.org/wiki/Robots>

[14]<www.alldatasheet.com>

[15]<www.google.com>

[16]www.wikipedia.com

OUTPUT

TRANSMITTER

RECIEVER

S.No | Pin Name | Pin Description

Output 1 | Output of 1st Comparator

Input 1- | Inverting Input of 1st Comparator

Input 1+ | Non-Inverting Input of 1st Comparator

VCC | Supply Voltage; 5V (up to 32V)

Input 2- | Non-Inverting Input of 2nd Comparator

Input 2+ | Inverting Input of 2nd Comparator

Output 2 | Output of 2nd Comparator

Output 3 | Output of 3rd Comparator

Input 3- | Inverting Input of 3rd Comparator

Input 3+ | Non-Inverting Input of 3rd Comparator

Ground | Ground (0V)

Input 4+ | Non-Inverting Input of 4th Comparator

Input 4- | Inverting Input of 4th Comparator

Output 4 | Output of 4th Comparator

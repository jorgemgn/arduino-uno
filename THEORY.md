## Ohm´s Law  
The first, and perhaps most important, the relationship between current, voltage, and resistance is called Ohm’s Law, discovered by Georg Simon Ohm and published in his 1827 paper.  
_The Galvanic Circuit Investigated Mathematically_.  

<p align="center">  
<img src="images/ohms-law.png" width="200"/>


## Resistor  
Is an electrical device that opposes the flow of current. Its value is measured in ohms (Ω).  

<p align="center">  
<img src="images/resistor-symbol.jpg" width="200"/>  

## Resistivity  
It describes the behaviour of a material when faced with the electric current flow, so it gives an idea of how good or bad a conductor it is.  
A high resistivity value indicates that the material is a poor conductor, while a low value will indicate that it is a good conductor.  
It is usually designated by the lower case Greek letter rho (ρ) and is measured in ohms per meter (Ω m).  

<p align="center">  
<img src="images/resistivity.jfif" width="200"/>

## Pull Down & Pull Up Resistor  

<p align="center">  
<img src="images/pull-up-down-resistor.jpg" width="300"/>  

When making our circuits, we find components that work in two states: HIGH or LOW.  
These ranges present a zone of uncertainty, in which the electronic noise can generate erroneous readings.  
To avoid these erroneous readings, we use the pull up or pull down resistance.  

  - __Pull Up__: When the circuit is at rest, the voltage drop on the board is 5V(HIGH), but when the button is pressed, all the current is diverted to ground, 0V(LOW).  
                 Normally 10K resistor will be used.  
  - __Pull Down__: When the circuit is at rest, the voltage drop on the board is 0V(LOW), but when the button is pressed, the voltage drop drops to 5V(HIGH).  
                 Normally 10K resistor will be used.  
                 
 ## LED (Light Emitting Diode)  
 
 <p align="center">  
<img src="images/LED.png" width="300"/>   
<p align="center">  
<img src="images/LED-resistor.jpg" width="300"/>  

## Four terminal push button  

<p align="center">  
<img src="images/4-terminal-push-button.jfif" width="300"/>  
  
## Seven segment display  

Consists of seven LEDs arranged in a rectagular fashion as shown. Each of the seven LEDs is called a segment because when illuminated, the segment forms part of an alphanumerical digit to be displayed.  
An additional 8th LED is sometimes used to display decimal numbers.  

<p align="center">  
<img src="images/numbers-7-segment-display.jpg" width="300"/>  

There are two types of display:  

 - __Common Anode__:  
 
<p align="center">  
<img src="images/common-anode-7-segment-display.jpg" width="300"/>   
 
 - __Common Cathode__:  
 
<p align="center">  
<img src="images/common-cathode-7-segment-display.jpg" width="300"/>  
  
For protecting the Arduino UNO board, because the current demand of a 7-segment display can exceed 150 mA, we will use a transistor, such as the 2N2222.

<img src="images/2N2222.png" aling="left" width="300"/> <img src="images/display-with-transistor.jpg" align="right" width="350"/> 

## Source  
- https://www.fisic.ch/contenidos/electricidad/ley-de-ohm-y-resistencia/  
- http://slotsyrockolas.blogspot.com/p/el-led.html  
- https://www.electronics-tutorials.ws/blog/7-segment-display-tutorial.html  
- https://www.prometec.net/display-4digitos/

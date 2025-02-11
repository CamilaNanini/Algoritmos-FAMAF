data Color=Rojo|Amarillo|Azul|Verde deriving (Show, Eq)
data Forma=Triangulo|Cuadrado|Rombo|Circulo deriving (Show, Eq)
type Figura=(Forma,Color,Int)

rojo (f,c,t)=c=Rojo
azul (f,c,t)=c=Azul
amarillo (f,c,t)=c=Amarillo
verde (f,c,t)=c=Verde
circulo (f,c,t)=f=Circulo
rombo (f,c,t)=f=Rombo
cuadrado (f,c,t)=f=Cuadrado
triangulo (f,c,t)=f=Triangulo

tam (f,c,t)=t


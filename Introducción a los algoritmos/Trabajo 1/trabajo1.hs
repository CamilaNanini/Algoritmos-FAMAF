f x=5*x
duplica a=a+a
por2 y=2*y
multiplicar s r=s*r

entre0y9 x |0<x && x<9=True
           |0>=x || x>=9 =False

rangoPrecio x |x<2000 && x>0="Muy Barato"
              |x>5000="Demasiado caro"
              |x>2000 && x<5000="Hay que verlo bien"
              |x<=0 ="¡Esto no puede ser!"

absoluto x |x>=0 =x
           |x<0 =(-x)

esMultiplo2 x |(mod x 2)==0 =True
              |(mod x 2) /=0 =False

esMultiploDe x y |(mod y x) ==0 =True
                 |(mod y x)/=0 =False

esBisiesto x= (mod x 400)==0 || ((mod x 4)==0 && (mod x 100)/=0)


dispersion a b c= max a (max b c) - min a (min b c)

celsiusToFahr x= (x*1.8)+32

fahrToCelsius x= (x-32)/1.8

haceFrioF x |8>fahrToCelsius x="Hace frio"
            |8<=fahrToCelsius x="No hace frio"

segundo3 (a,b,c)= b

ordena (a,b)= ((min a b),(max a b))

rangoPrecioParametrizado a (b,c) |a<=b="Muy Barato"
                                 |a>=c="Demasiado caro"
                                 |b<a && a<c="Hay que verlo bien"
                                 |a<=0="Esto no puede ser!!"

mayor3 (x,y,z)=((x>3),(y>3),(z>3))

todosIguales (f,g,h) |(f==g)&&(g==h)=True
                     |otherwise=False
soloPares []=[]
soloPares (x:xs) |((mod x 2)==0)=x:soloPares xs
                 |otherwise=soloPares xs

mayoresQue10 []=[]
mayoresQue10 (x:xs) |x>10=x:mayoresQue10 xs
                    |otherwise=mayoresQue10 xs

mayoresQue a []=[]
mayoresQue a (x:xs) |a<x=x:mayoresQue a xs
                    |otherwise=mayoresQue a xs

sumar1 []=[]
sumar1 (x:xs)= (x+1):sumar1 xs

duplica []=[]
duplica (x:xs)=(2*x):duplica xs

multiplica n []=[]
multiplica n (x:xs)= (n*x):multiplica n xs

hay0 []= False
hay0 (x:xs) |x==0= True || hay0 xs
            |x/=0= False || hay0 xs

suma []=0
suma (x:xs)= x+suma xs

maximo []=0
maximo (x:xs)= max x (maximo xs)

sumar (a,b)=a+b
sumaPares []=0
sumaPares ((a,b):xs)=(sumar (a,b)) + sumaPares xs

todos0y1 []=True
todos0y1 (x:xs) |x==0 || x==1 =True && todos0y1 xs
                |otherwise= False && todos0y1 xs

quitar0s []=[]
quitar0s (x:xs) |x==0 = quitar0s xs
                |x/=0 = x:quitar0s xs

ultimo []=[]
ultimo (x:xs)= tail xs

repetir 0 k=[]
repetir n k= k:(repetir (n-1) k)

concatenar []=[]
concatenar (x:xs)=x++concatenar xs

rev []=[]
rev (x:xs)=rev xs++[x]

listasIguales [] []=True
listasIguales (x:xs) (y:ys)= (x:xs) == (y:ys)

mejorNota []=[]
mejorNota ((n,a,b,c):xs)= ((n,(max a (max b c)))):mejorNota xs

incPrim []=[]
incPrim ((a,b):xs)= ((a+1),b): incPrim xs

expandir []=[]
expandir (x:xs)= x:' ':expandir xs
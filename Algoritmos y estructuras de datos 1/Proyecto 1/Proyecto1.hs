---Ejercicio 2, parte 1---
esCero :: Int -> Bool
esCero a= a==0

esPositivo :: Int -> Bool
esPositivo a= a>0

esVocal :: Char -> Bool
esVocal c= c=='a'||c=='e'||c=='i'||c=='o'||c=='u'

---Ejercicio 2, parte 2---
paratodo :: [Bool]->Bool
paratodo []=True
paratodo (x:xs) |x==True =x && paratodo xs
                |otherwise= False

sumatoria :: [Int] -> Int
sumatoria []= 0
sumatoria (x:xs)= x+sumatoria xs

productoria :: [Int] -> Int
productoria []=1
productoria (x:xs)= x*productoria xs

factorial :: Int -> Int
factorial 0 = 1
factorial a = a*factorial (a-1)

promedio :: [Int] -> Int
promedio []=0
promedio (x:xs)= div (sumatoria(x:xs)) (length (x:xs))

---Ejercicio 2, parte 3---
pertenece :: Int -> [Int] -> Bool
pertenece a []=False
pertenece a (x:xs) |a==x = True || pertenece a xs
                   |a/=x = False || pertenece a xs

---Ejercicio 2, parte 4---
paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' [] predicado = True
paratodo' (x:xs) predicado = predicado (x) && (paratodo' xs predicado)

existe' :: [a] -> (a -> Bool) -> Bool
existe' [] predicado = False
existe' (x:xs) predicado = predicado (x) || (existe' xs predicado)

sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] funcion = 0
sumatoria' (x:xs) funcion = (funcion x) + (sumatoria' (xs) funcion)

productoria' :: [a] -> (a -> Int) -> Int
productoria' [] funcion = 1
productoria' (x:xs) funcion= (funcion x) * (productoria' (xs) funcion)

---Ejercicio 2, parte 5---
paratodo'' :: [a] -> (a -> Bool) -> Bool
paratodo'' [] predicado = True
paratodo'' (x:xs) predicado = predicado (x) && (paratodo' xs predicado) 

---Ejercicio 2, parte 6---
todosPares :: [Int] -> Bool
todosPares [] = True
todosPares (x:xs) = paratodo'(x:xs) even

hayMultiplo :: Int -> [Int] -> Bool 
hayMultiplo a [] = False
hayMultiplo a (x:xs) = existe' (x:xs) (multiplo a)
---multiplo c b :: a -> b -> Bool (Defino esta función aparte para implementarla en hayMultiplo)---
multiplo c b= mod b c ==0

sumaCuadrados :: Int -> Int
sumaCuadrados d = sumatoria' [0..d] (condicion)
---condicion a :: Int -> Int (Defino esta función aparte para implementarla en sumaCuadrados)---
condicion a=a^2

factorial' :: Int -> Int
factorial' s = productoria' [1..s] propiedad
propiedad a| a==0 = 1
           | a/=0 = a*1

multiplicaPares :: [Int]-> Int
multiplicaPares [] = 1
multiplicaPares (x:xs) = productoria' (x:xs) cualidad
cualidad a| (mod a 2)==0 = a
          | (mod a 2)/=0 = 1

---Ejercicio 2, parte 7---
---a) La función map lo que hace es tomar una lista y devuelve otra lista (que a veces puede tener otro tipo) de la misma 
---cantidad de elementos. Y la función filter toma una lista y devuelve otra lista del mismo tipo pero con menos elementos.
---b)La función map succ [1,(-4),6,2,(-8)] donde succ n=n+1; devolvería la lista [2,(-3),7,3,(-7)]. Esto porque toma la 
---primera lista y toma cada elemento y le suma 1 y coloca los resultados en una lista nuevamente.
---c)La expresión filter esPositivo [1,(-4),6,2,(-8)] devuelve la lista [1,6,2] ya que como lo indica filtra cada uno
---de los elementos fijandose si es positivo o no, y aquellos que si lo son los vuelve a colocar en una nueva lista.

---Ejercicio 2, parte 8---
--a--
duplica :: [Int] -> [Int]
duplica []= []
duplica (x:xs)= x*2 : duplica xs
--b--
duplica' :: [Int] -> [Int]
duplica' []= []
duplica' (x:xs)= map (*2) (x:xs)

---Ejercicio 2, parte 9---
--a--
solopares :: [Int] -> [Int]
solopares []= []
solopares (x:xs) | even x = x : solopares xs
                 | otherwise = solopares xs
--b--
solopares' :: [Int] -> [Int]
solopares' []= []
solopares' (x:xs)= filter even (x:xs)
--c--
multiplicaPares' :: [Int]-> Int
multiplicaPares' [] = 1
multiplicaPares' (x:xs) = productoria'(filter even (x:xs)) (*1)

---Ejercicio 2, parte 10---
--a--
primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA b [] = []
primIgualesA b (x:xs) | b==x = x : primIgualesA b (xs)
                      | b/=x = []
--b--
primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' b []= []
primIgualesA' b (x:xs)= takeWhile (==b) (x:xs)

---Ejercicio 2, parte 11--
--a--
primIguales :: Eq a => [a] -> [a]
primIguales []=[]
primIguales (a:b:xs) | a==b = a:primIguales (b:xs)
                     | a/=b = a:[]
--b--
primIguales' :: Eq a => [a] -> [a]
primIguales' []=[]
primIguales' (a:b:xs)= primIgualesA a (a:b:xs)

--Ejercicio 2, parte 12--
cuantGen :: (b -> b -> b) -> b -> [a] -> (a -> b) -> b 
cuantGen _ e [] _ = e
cuantGen op e (x:xs) t = op (t x) (cuantGen op e (xs) t)

paratodo'''' :: [a] -> (a -> Bool) -> Bool
paratodo'''' xs t = cuantGen (&&) True xs t

existe''' :: [a] -> (a -> Bool) -> Bool
existe''' xs t = cuantGen (||) False xs t

sumatoria''' :: Num b => [a] -> (a -> b) -> b
sumatoria''' xs t = cuantGen (+) 0 xs t

productoria''' :: Num b => [a] -> (a -> b) -> b
productoria''' xs t = cuantGen (*) 1 xs t

--Ejercicio 2, parte 13--
--a) La expresión está bien tipada ya que pide que se ingrese una tupla y eso se coloca.
--Luego f :: (a, b) -> 
--      f (x , y) = ...
--  x::a , x::b y (x,y) :: (a,b)
--b) La expresión está mal tipada ya que pide que se ingrese una tupla y lo que se coloca es una lista de tuplas.
--c) La expresión está bien tipada ya que pide que se ingrese una lista de tuplas y eso se coloca, pero
--no está considerado el caso de la lista vacia.
--Luego f :: [(a, b)] -> 
--      f (x : xs) = ...
--  x::(a,b) , xs::[a] y (x:xs) :: [(a, b)]
--d) La expresión está bien tipada ya que pide que se ingrese una lista de tuplas y eso se coloca, pero
--no está considerado el caso de la lista vacia.
--Luego f :: [(a, b)] -> 
--      f ((x, y) : ((a, b) : xs)) = ...
--  (a, b)::(x, y) , [a]:: ((a, b) : xs) y [(a, b)]::((x, y) : ((a, b) : xs))
--e) La expresión está bien tipada ya que pide que se ingrese una lista de tuplas en donde el primer
--elemento sea un entero y el segundo uno de tipo a. Nuevamente no se toma en cuenta la lista vacía.
--Luego: f :: [(Int, a)] -> ...
--       f [(0, a)] = ...
--  Int::0 , a::a y [(Int, a)]::[(0, a)]
--f) La expresión está mal tipada ya que pide que se ingrese una lista de tuplas en donde el primer
--elemento sea un entero y el segundo uno de tipo a; pero lo que se coloca es una función en donde
--el primer elemento algo distinto de Int.
--g) La expresión está mal tipada ya que pide que se ingrese una función de tipo Int -> Int y otro 
--entero.Pero lo que se coloca en la segunda entrada es un elemento de tipo b por lo que no es lo pedido.
--h) La expresión está bien tipada ya que pide que se ingrese una función de tipo Int -> Int y otro 
--entero.Y se coloca a (que puede ser una función) y un entero.
--Luego: f :: (Int -> Int) -> Int -> ...
--       f a 3 = ...
-- (Int -> Int)::a , Int::3 y (Int -> Int) -> Int :: a 3
--i) La expresión está mal tipada ya que pide que se ingrese una función de tipo Int -> Int y otro 
--entero.Y lo que se coloca son solamente 3 enteros.

--Ejercicio 2, parte 14--
--a) 
f :: (a, b) -> b
-- a::x
-- b::y
f (x,y)=y
--b) 
f' :: (a, b) -> c
-- a::r
-- b::s
-- c::?
f' (r,s)=undefined
--No se puede definir ya que estamos ingresando una tupla con tipos a y b y devolvemos algo del tipo c.
--c) 
f'' :: (a -> b) -> a -> b
-- x ::(a -> b)
-- y::a
---f y :: b
f'' r t=r t
--d) 
f''' :: (a -> b) -> [a] -> [b]
-- x ::(a -> b)
-- as::[a]
-- head as :: a
-- f (head as):: b
f''' s xs= s (head (xs)) : []
f2''' e (x:xs) = map e (x:xs)
--e) 
f'''' :: (a -> b) -> (b -> c) -> a -> c
-- u :: (a -> b)
-- t :: (b -> c)
-- l :: a
-- u l :: b
-- t (u l) :: c
f'''' u t l = t (u l)


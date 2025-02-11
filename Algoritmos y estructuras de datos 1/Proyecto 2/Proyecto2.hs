--Ejercicio 1 a--
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Eq,Read,Show)

--Ejercicio 1 b--
titulo :: Carrera -> String
titulo (Matematica) = "Licenciatura en matematica"
titulo (Fisica) = "Licenciatura en fisica"
titulo (Computacion) = "Licenciatura en ciencias de la computacion"
titulo (Astronomia) = "Licenciatura en astronomia"

--Ejercicio 1 c--
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si deriving (Eq,Ord,Show,Bounded)

--Ejercicio 1 d--
cifradoAmericano :: NotaBasica -> Char
cifradoAmericano (Do) = 'c'
cifradoAmericano (Re) = 'd'
cifradoAmericano (Mi) = 'e'
cifradoAmericano (Fa) = 'f'
cifradoAmericano (Sol) = 'g'
cifradoAmericano (La) = 'a'
cifradoAmericano (Si) = 'b'

--Ejercicio 2 a--
--Agrego las clases de (Eq,Ord,Show) a data NotaBasica.

--Ejercicio 3 a--
minimoElemento :: Ord a => [a] -> a
minimoElemento [t] = t
minimoElemento (x:xs) = min x (minimoElemento xs)

--Ejercicio 3 b--
minimoElemento' :: (Bounded a,Ord a) => [a] -> a
minimoElemento' [] = maxBound
minimoElemento' (x:xs) = min x (minimoElemento' xs)

--Ejercicio 3 c--
masGrave :: [NotaBasica] -> NotaBasica
masGrave [] = minBound :: NotaBasica
masGrave xs = minimoElemento xs

--Ejercicio 4 a--
data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Eq,Show)
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving (Eq,Show)
type Ingreso = Int
data Persona = Decane | Docente Cargo | NoDocente Area | Estudiante Carrera Ingreso deriving (Eq,Show)

--Ejercicio 4 b--
--El tipo de Docente es Cargo -> Persona.

--Ejercicio 4 c--
cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] c = 0
cuantos_doc (x:xs) c | x==Docente c = 1 + (cuantos_doc xs c)
                     | otherwise= 0 + (cuantos_doc xs c)

--Ejercicio 4 d--
cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' [] c = 0
cuantos_doc' (x:xs) c = length (filter (condicion c) (x:xs))

--condición necesaria para el filter
condicion :: Cargo -> Persona -> Bool
condicion c x = x == Docente c

--Ejercicio 5 a--
data Alteracion = Bemol | Sostenido | Natural deriving (Eq,Show,Ord)
data NotaMusical = Nota NotaBasica Alteracion deriving (Eq,Show,Ord)

sonido :: NotaBasica -> Int
sonido Do = 1
sonido Re = 3
sonido Mi = 5
sonido Fa = 6
sonido Sol = 8
sonido La = 10
sonido Si = 12
--Función auxiliar para simplificar el ejercicio 5 b--
tono :: Alteracion -> Int
tono Bemol = -1
tono Sostenido = 1
tono Natural = 0

--Ejercicio 5 b--
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota x y) = (sonido x) + (tono y)

--Ejercicio 5 c--
--Incluir el tipo NotaMusical a la clase Eq

--Ejercicio 5 d--
menorOigual :: NotaMusical -> NotaMusical -> Bool
menorOigual (Nota a b) (Nota x y) = (sonidoCromatico (Nota a b)) <= (sonidoCromatico (Nota x y))

--Ejercicio 6 a--
primerElemento :: [ a ] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:xs) = Just x

--Ejercicio 7 --
data Cola = VaciaC | Encolada Persona Cola deriving (Show)

--A 1--
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada x xs) = Just xs

--A 2--
encolar :: Persona -> Cola -> Cola
encolar (x) VaciaC =  Encolada x VaciaC
encolar (x) (Encolada y xs) = (Encolada x (Encolada y xs))

--A 3-- 
busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC x = Nothing
busca (Encolada (Docente z) xs) r | (Docente z) == (Docente r) = Just (Docente z)
                                  | (Docente z) /= (Docente r) = busca xs r

--B) La función definida en el punto anterior es similar al comportamiento de las listas.

--Ejercicio 8 --
--A) 
type Guia_telefonica = ListaAsoc String Int
--En donde String será la dirección y en Int se colocaría el número telefónico

--B)--
data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b ) deriving (Show,Eq)
--1
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo a b (r))= 1 + (la_long r)

--2
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia Vacia =  Vacia
la_concat Vacia r =  r
la_concat r Vacia =  r
la_concat (Nodo a b (xs)) r = Nodo a b (la_concat xs r) 

--3
la_agregar :: ListaAsoc a b -> a -> b -> ListaAsoc a b 
la_agregar Vacia x y =  Vacia
la_agregar (Nodo a b (xs)) x y = Nodo x y (Nodo a b (xs))

--4 
la_pares :: ListaAsoc a b -> [(a, b)] 
la_pares Vacia = []
la_pares (Nodo a b (xs)) = [(a,b)] ++ la_pares (xs)

--5 
la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b 
la_busca Vacia x = Nothing
la_busca (Nodo a b (xs)) x | x == a = Just b 
                           | x /= a = la_busca xs x 

--6 
la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b 
la_borrar x Vacia = Vacia
la_borrar x (Nodo a b (xs)) | a == x = xs
                            | a /= x = Nodo a b (xs)

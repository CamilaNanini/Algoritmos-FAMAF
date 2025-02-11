data Dedicacion = Simple | Semi | Full | Investigador deriving (Show)
type Cantidad = Int

misma_dedicacion :: Dedicacion -> Dedicacion -> Bool
misma_dedicacion Simple Simple = True
misma_dedicacion Semi Semi = True
misma_dedicacion Full Full = True
misma_dedicacion Investigador Investigador = True
misma_dedicacion _ _ = False

horas_trabajo :: Dedicacion -> Cantidad
horas_trabajo Simple = 10
horas_trabajo Semi = 20
horas_trabajo Full = 50
horas_trabajo Investigador = 60

instance Ord Dedicacion where
    m1 <= m2 = horas_trabajo m1 <= horas_trabajo m2
instance Eq Dedicacion where
    m1 == m2 = horas_trabajo m1 == horas_trabajo m2

data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Eq,Read,Show)
data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Eq,Show)
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving (Eq,Show)
type Ingreso = Int
data Persona = Decane Dedicacion | Docente Cargo Dedicacion| NoDocente Area Dedicacion| Estudiante Carrera Ingreso deriving (Eq,Show)

--Función auxiliar para la siguiente
sudedicacion :: Persona -> Dedicacion
sudedicacion (Decane d) = d
sudedicacion (Docente c d) = d
sudedicacion (NoDocente a d) = d

solo_dedicacion :: [Persona] -> Dedicacion -> [Persona]
solo_dedicacion [] d = []
solo_dedicacion ((Estudiante c i):ps) d = [] ++ solo_dedicacion (ps) d
solo_dedicacion (p:ps) d | sudedicacion (p) == d = [p] ++ solo_dedicacion (ps) d
                         | otherwise = [] ++ solo_dedicacion (ps) d

data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b ) deriving (Show,Eq)
la_mismo_valor :: Eq b => ListaAsoc a b -> b -> ListaAsoc a b
la_mismo_valor (Vacia) x = Vacia
la_mismo_valor (Nodo a b (la)) x | b==x = Nodo a b (la_mismo_valor (la) x)
                                 | otherwise = la_mismo_valor (la) x

data Arbol a = Hoja | Rama  (Arbol a) a (Arbol a) deriving (Show)
dar_subarbol :: Eq a => a -> Arbol a -> Arbol a
dar_subarbol e (Hoja) = Hoja
dar_subarbol e (Rama (a1) a3 (a2)) | e==a3 = Rama (dar_subarbol e (a1)) a3 (dar_subarbol e (a2))
                                   | otherwise = Hoja
Algoritmo movimientoArmonicoSimple
	Escribir 'Datos Escenario 1: '
	Escribir 'Ingrese la amplitud (m): '
	Leer amplitud
	Escribir 'Ingrese la frecuencia cíclica (rad/s): '
	Leer frecuenciaCiclica
	Escribir 'Ingrese la fase inicial (grados sexagesimales): '
	Leer faseInicial
	Escribir 'Ingrese el tiempo (min): '
	Leer tiempo
	Si ((amplitud>0) y (faseInicial<360) y (frecuenciaCiclica>0) y (tiempo>0)) Entonces
		Escribir 'Resultados Escenario 1 '
		faseInicialRad <- faseInicial*PI/180
		tiempoSeg <- tiempo*60
		distancia <- amplitud*sen(frecuenciaCiclica*tiempoSeg+faseInicialRad)
		velocidad <- frecuenciaCiclica * rc(amplitud^2-distancia^2)
		aceleracion <- -amplitud*frecuenciaCiclica*frecuenciaCiclica*sen(frecuenciaCiclica*tiempoSeg+faseInicialRad)
		Escribir 'Distancia ', distancia
		Escribir 'Velocidad ', velocidad
		Escribir 'Aceleracion ', aceleracion
	SiNo
		Escribir 'Para el escenario 1 los datos no son válidos'
	FinSi
	Escribir 'Datos escenario 2: '
	Escribir 'Ingrese la velocidad (m/h): '
	Leer velocidad2
	Escribir 'Ingrese la amplitud (m): '
	Leer amplitud2
	Escribir 'Ingrese la distancia (cm): '
	Leer distancia2
	Escribir 'Ingrese el tiempo (s): '
	Leer tiempo2
	Si ((amplitud<100) y (distancia2>0) y (tiempo2>0)) Entonces
		Escribir 'Resultados escenario 2'
		distanciaM <- distancia2/100
		velocidadMS <- velocidad2/3600
		frecuenciaCiclica2 <- velocidadMS/(rc(amplitud2^2-distanciaM^2))
		faseInicialRad2 <- acos(velocidadMS/(amplitud2*frecuenciaCiclica2)) - frecuenciaCiclica2*tiempo2
		aceleracion2 <- - amplitud2 * frecuenciaCiclica2*frecuenciaCiclica2 * sen(frecuenciaCiclica2*tiempo2+faseInicialRad2)
		Escribir 'Frecuencia cíclica ', frecuenciaCiclica2
		Escribir 'Fase inicial ', faseInicialRad2
		Escribir 'Aceleración ', aceleracion2
	SiNo 
		Escribir 'Para el escenario 2 los datos no son válidos'
	FinSi
	Si (((amplitud>0) y (faseInicial<360) y (frecuenciaCiclica>0) y (tiempo>0)) y ((amplitud<100) y (distancia2>0) y (tiempo2>0))) Entonces
		Si aceleracion2>=aceleracion Entonces
			Escribir 'En el escenario 2 la aceleracion es mayor o igual que el escenario 1,'
		SiNo
			Escribir 'En el escenario 2 la aceleracion es menor que el escenario 1,'
		FinSi
		Si aceleracion2>=aceleracion Entonces
			diferenciaAceleraciones <- aceleracion2-aceleracion
			Escribir ' la diferencia entre las aceleraciones es: ', diferenciaAceleraciones
		SiNo
			diferenciaAceleraciones <- aceleracion-aceleracion2
			Escribir ' la diferencia entre las aceleraciones es: ', diferenciaAceleraciones
		FinSi
	FinSi
FinAlgoritmo

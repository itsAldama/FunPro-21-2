Algoritmo movimientoParabolico
	Escribir 'Datos escenario 1: '
	Escribir 'Ingrese la velocidad inicial de la pelota (m/s): '
	Leer velocidadInicial
	Escribir 'Ingrese el ángulo de tiro de la pelota (grados sexagesimales): '
	Leer angulo
	gravedad <- 9.81
	Si (velocidadInicial>0 y angulo>0 y angulo<360) Entonces
		anguloRad <- angulo*PI/180
		altura <- (velocidadInicial^2*(sen(anguloRad))^2)/gravedad
		distanciaKM <- (velocidadInicial^2*sen(2*anguloRad))/gravedad
		
		
	FinSi
	
FinAlgoritmo

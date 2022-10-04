// Jeremy Daniel Aldama Giraldo 20206228
Algoritmo semejanzaDeTriangulos
	Escribir 'Datos del escenario 1'
	Escribir 'Ingrese la altura del poste 1 (en centímetros)'
	Leer alturaCM1
	Escribir 'Ingrese el seno del ángulo entre el piso y la sombra de los edificios:'
	Leer senoAngulo
	Escribir 'Ingrese la distancia entre los postes (en metros):'
	Leer distanciaEntrePostes
	Escribir 'Ingrese la distancia entre el segundo poste y el punto del ángulo (en centímetros):'
	Leer distanciaPoste2AnguloCM
	e1Validacion <- (alturaCM1>0 y distanciaEntrePostes>0 y distanciaPoste2AnguloCM>0 y senoAngulo<1)
	Si e1Validacion Entonces
		Escribir 'Resultados del escenario 1'
		//Cálculos (luego de media hora corrigieron el error y no pude completar ni entender bien el problema)
		alturaM1 <- alturaCM1/100
		distanciaPoste2AnguloM <- distanciaPoste2AnguloCM/100
		altura2 <- alturaM1*distanciaPoste2AnguloM/distanciaEntrePostes
		distanciaPoste1Angulo <- distanciaEntrePostes + distanciaPoste2AnguloM
		anguloPisoEdificios <- asen(senoAngulo)*180/PI //pasar de rad a sexagesimales como piden
		anguloEdificiosEdificios <- 90-anguloPisoEdificios
		longitudLineaSombra <- alturaM1/senoAngulo
		Escribir 'La altura del segundo poste es ', altura2
		Escribir 'La distancia del primer poste al punto del ángulo es ', distanciaPoste1Angulo
		Escribir 'El ángulo que se forma entre el piso y la linea de sombra de los edificios es ', anguloPisoEdificios, ' grados sexagesimales'
		Escribir 'El ángulo que se forma entre los edificios y la línea de sombra de los edificios es ', anguloEdificiosEdificios, ' grados sexagesimales'
		Escribir 'La longitud de la línea de sombra es ', longitudLineaSombra, ' m'
	SiNo
		Escribir 'Los datos ingresados del escenario 1 no son válidos'
	FinSi
	Escribir 'Datos del escenario 2'
	Escribir 'Ingrese la hipotenusa del triángulo (en decímetros)'
	Leer hipotenusaDM
	Escribir 'Ingrese el ángulo inferior del triángulo (en grados sexagesimales)'
	Leer anguloInferior
	e2Validacion <- hipotenusaDM>0 y anguloInferior>0 y anguloInferior<90
	Si e2Validacion Entonces
		Escribir 'Resultados del escenario 2'
		//calculos
		anguloInferiorRad <- anguloInferior*PI/180
		hipotenusaM <- hipotenusaDM/10
		alturaEdificio <- hipotenusaM*sen(anguloInferiorRad)
		baseEdificio <- cos(anguloInferiorRad)*hipotenusaM
		Escribir 'La altura del edificio es ', alturaEdificio, ' m'
		Escribir 'La base del edificio es ', baseEdificio, ' m'
	FinSi
	//Validacion final
	Si ((e1Validacion y e2Validacion) y (alturaEdificio>=alturaM1) y (alturaEdificio>=altura2))Entonces
		Escribir 'El edificio es más alto o de la misma altura que los postes'
	SiNo
		Escribir 'El edificio tiene menos altura que los postes'
	FinSi
FinAlgoritmo

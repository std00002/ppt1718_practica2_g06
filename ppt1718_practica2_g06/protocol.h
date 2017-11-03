#ifndef protocolostpte_practicas_headerfile
#define protocolostpte_practicas_headerfile
#endif

// COMANDOS DE APLICACION
#define HELO "HELO"

#define QUIT  "QUIT"  // Finalizacion de la conexion de aplicacion


// RESPUESTAS A COMANDOS DE APLICACION
#define OK  "2"
#define OKDATA "3"
#define ERROR  "5"

//FIN DE RESPUESTA
#define CRLF "\r\n"

//ESTADOS
#define S_HELO 0
#define S_USER 1
#define S_PASS 2
#define S_DATA 3
#define S_QUIT 4
#define S_ERROR 5

//PUERTO DEL SERVICIO
#define TCP_SERVICE_PORT	25

// NOMBRE Y PASSWORD AUTORIZADOS
#define USER		"alumno"
#define PASSWORD	"123456"
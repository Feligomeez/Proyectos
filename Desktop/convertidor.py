import PySimpleGUI as sg
 
layout = [
    [sg.Input(key = 'entrada'), sg.Spin(['Kilogramos a libras','Segundos a minutos', 'Kilometros a millas'], key = 'spin'), sg.Button('Convertir' , key = 'boton1')],
    [sg.Text('Introduce un numero', enable_events = True, key = 'salida')]
]

window = sg.Window('Convertir', layout)

while True: 
    event, values = window.read()

    if event == sg.WIN_CLOSED:
        break

    if event == 'boton1':
        entrada = values['entrada']
        if entrada.isnumeric():
            match values['spin']:
                case 'Kilogramos a libras':
                    resultado = float(entrada) * 2.20462
                    resultadostring = f'{entrada} Kilogramos son {resultado} en libras'
                case 'Segundos a minutos':
                    resultado = float(entrada) / 60
                    resultadostring = f'{entrada} segundos son {resultado} en minutos'
                case 'Kilometros a millas':
                    resultado = float(entrada) * 0.6214
                    resultadostring = f'{entrada} kilogramos son {resultado} en millas'
            

            window['salida'].update(resultadostring)

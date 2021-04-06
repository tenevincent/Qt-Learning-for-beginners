import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")



    Image {
        id: image
        source: "qrc:/images/Qt_logo_2016.svg"
        width: 150
        height: 100
        x: 100
        y: 100
        z: 0

        Rectangle{
            color: colorHandler.pressed ? "green" : "magenta"
            x : -25
            y : -25
            width: 50
            height: 50
            opacity: 1
            TapHandler{
                id:colorHandler
            }

            z:0
        }

        Rectangle{

            x : parent.width- width
            y : parent.height - height
            width: 70
            height: 70
            color: inputHandler.pressed ? "red" : "blue"
            opacity: 1
            TapHandler  {
                id: inputHandler
            }
            z: 4
        }

    }
}

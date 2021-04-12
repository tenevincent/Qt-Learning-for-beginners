import QtQuick 2.12
import QtQuick.Window 2.12

/*
  Rectangle
  https://doc.qt.io/qt-5/qml-qtquick-rectangle.html
  Its an Item
  There is no circle!
  */


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Rectangle {
           id: myItem
           anchors.centerIn: parent
           color: "red"
           width: 200
           height: 200
           visible: true
           border.color: onImageTapped.pressed ? "black" : "red"
           border.width: 10
           radius: width
           //Gradients are super easy!
           //https://doc.qt.io/qt-5/qml-qtquick-gradientstop.html
           gradient: Gradient {
               GradientStop {position: 0.0; color: "green"}
               GradientStop {position: 1.0; color: "blue"}
           }
       }


    //java script???
    property var middle: height / 2

    Image {
        id: localImage
        source: "qrc:/images/Qt_logo_2016.svg"

        TapHandler{
            id:onImageTapped
        }

        width: 300
        fillMode: Image.PreserveAspectFit

        x: 300
        y: 400
    }

    Image {
        id: remoteImage
        source: "https://upload.wikimedia.org/wikipedia/commons/thumb/0/0b/Qt_logo_2016.svg/578px-Qt_logo_2016.svg.png"

        width: 100
        fillMode: Image.PreserveAspectFit

        x: 100
        y: 400

        onProgressChanged: console.log(remoteImage.progress)
        onStatusChanged: if(remoteImage.status == Image.Ready) console.log("Remote image was loaded")
    }



}

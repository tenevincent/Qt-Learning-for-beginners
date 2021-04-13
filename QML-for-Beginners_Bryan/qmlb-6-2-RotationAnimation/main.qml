import QtQuick 2.12
import QtQuick.Window 2.12



Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    property bool isAnimationRunning: false

    Rectangle{
        id:myShape
        color: "red"
        width: 200
        height: 200
        anchors.centerIn: parent


        MouseArea{
            anchors.fill: parent

            onClicked: {
                //bool isRunning =
                isAnimationRunning != isAnimationRunning
                console.log(isAnimationRunning)
                if(isAnimationRunning){
                    colorAnimation.running = true
                isAnimationRunning = false;
                }
                else{
                    colorAnimation.running = false
                      isAnimationRunning = true;
                }

            }
        }


        Text {
            id: title
            text: Math.round(parent.rotation)
            anchors.centerIn: parent
            font.bold: true
            font.pointSize: 65
            color: "green"


        }


        RotationAnimation{
            id: colorAnimation
            target: myShape
            loops: Animation.Infinite
            from:myShape.rotation
            to:360 // -360°
            direction: RotationAnimation.Clockwise // RotationAnimation.Clockwise
            duration: 6000
            running: isAnimationRunning
        }

    }

}

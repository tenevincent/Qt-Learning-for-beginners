import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Image {
        id: ghost
        source: "qrc:/images/ghost.jpg"
        anchors.fill: parent
        opacity: 0
    }


    SequentialAnimation {
        loops: Animation.Infinite
        running: true

        OpacityAnimator {
            target: ghost
            from: 0
            to: 1
            duration: 1000
        }
        OpacityAnimator {
            target: ghost
            from: 1
            to: 0
            duration: 3000
        }
    }


}

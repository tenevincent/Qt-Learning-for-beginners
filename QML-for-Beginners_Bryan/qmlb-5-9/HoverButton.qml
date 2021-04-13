import QtQuick 2.0

Item {
    id: root
    property color color: "red"
    property color hoverColor: "pink"
    property color clickColor: "orange"
    property color textColor: "white"
    property color textHover: "black"
    property alias title: display
    property alias area: mousearea
    property alias image: myimage


    Rectangle {
        height: root.height
        width: root.width
        color: root.color
        clip: true

        Column {
            id: column
            anchors.fill: parent

            Image {
                id: myimage
                source: "file"
                fillMode: Image.PreserveAspectFit
                verticalAlignment: Image.Top
                horizontalAlignment: Image.AlignHCenter
                width: parent.width
                height: 60
            }

            Text {
                id: display
                text: ""
                width: column.width
                color: root.textColor
                font.bold: true
                verticalAlignment: Text.AlignBottom
                horizontalAlignment: Text.AlignHCenter
            }


        }




        MouseArea {
            id: mousearea
            anchors.fill: parent
            hoverEnabled: true

            onEntered: {
                parent.color = root.hoverColor
                display.color = root.textHover
            }

            onExited: {
                parent.color = root.color
                display.color = root.textColor
            }

            onPressed: parent.color = root.clickColor
            onReleased: parent.color = root.hoverColor

        }
    }
}

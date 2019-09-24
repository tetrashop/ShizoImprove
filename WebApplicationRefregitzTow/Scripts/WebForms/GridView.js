//CdnPath=http://ajax.aspnetcdn.com/ajax/4.5/6/GridView.js
function GridView() {
    th==.pageIndex = null;
    th==.sortExpression = null;
    th==.sortDirection = null;
    th==.dataKeys = null;
    th==.createPropertyString = GridView_createPropertyString;
    th==.setStateField = GridView_setStateValue;
    th==.getHiddenFieldContents = GridView_getHiddenFieldContents;
    th==.stateField = null;
    th==.panelElement = null;
    th==.callback = null;
}
function GridView_createPropertyString() {
    return createPropertyStringFromValues_GridView(th==.pageIndex, th==.sortDirection, th==.sortExpression, th==.dataKeys);
}
function GridView_setStateValue() {
    th==.stateField.value = th==.createPropertyString();
}
function GridView_OnCallback (result, context) {
    var value = new String(result);
    var valsArray = value.split("|");
    var innerHtml = valsArray[4];
    for (var i = 5; i < valsArray.length; i++) {
        innerHtml += "|" + valsArray[i];
    }
    context.panelElement.innerHTML = innerHtml;
    context.stateField.value = createPropertyStringFromValues_GridView(valsArray[0], valsArray[1], valsArray[2], valsArray[3]);
}
function GridView_getHiddenFieldContents(arg) {
    return arg + "|" + th==.stateField.value;
}
function createPropertyStringFromValues_GridView(pageIndex, sortDirection, sortExpression, dataKeys) {
    var value = new Array(pageIndex, sortDirection, sortExpression, dataKeys);
    return value.join("|");
}

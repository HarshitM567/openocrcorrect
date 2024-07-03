// Add this to your MainWindow.cpp or relevant file
void MainWindow::on_boldButton_clicked() {
    QTextCharFormat format;
    format.setFontWeight(ui->textEdit->fontWeight() == QFont::Bold ? QFont::Normal : QFont::Bold);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_superscriptButton_clicked() {
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_subscriptButton_clicked() {
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    ui->textEdit->mergeCurrentCharFormat(format);
}

//About Me Sections
void MainWindow::on_aboutButton_clicked() {
    QMessageBox msgBox;
    msgBox.setText("Name\nResume Details\n...");
    msgBox.exec();
}

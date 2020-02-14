# Pre-registration-of-Translated-Distorted-Fingerprints-Based-on-Correlation-and-The-Orientation-Field
Codes for paper "Pre-registration of Translated/Distorted Fingerprints Based on Correlation and The Orientation Field"
# Default Usage:  
Given 2 test images I1 and I2, whose dynamic range is 0-255  
[corre, correm, M] = OFDC_param(I1, I2)  
# Input
(1) I1: the reference image  
(2) I2: the query image
(3) alpha: the variable parameter of OFDC, default = 0.2
(4) iter_num: the number of iteration, default = 100
# Output: 
(3) M: the registered query image
(4) corre: the correalation before registration(I1 and I2);  
(5) correm: the correalation after registration(I1 and M);   

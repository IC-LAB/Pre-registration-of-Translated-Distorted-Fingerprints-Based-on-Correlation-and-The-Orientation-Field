# Pre-registration-of-Translated-Distorted-Fingerprints-Based-on-Correlation-and-The-Orientation-Field
Codes for paper "Pre-registration of Translated/Distorted Fingerprints Based on Correlation and The Orientation Field"
# Default Usage:  
Given 2 test images I1 and I2, whose dynamic range is 0-255  
[corre, correm, M] = OFDC_param(I1, I2)  
# Input
I1: the reference image  
I2: the query image  
alpha: the variable parameter of OFDC, default = 0.2  
iter_num: the number of iteration, default = 100  
# Output: 
M: the registered query image  
corre: the correalation before registration(I1 and I2);  
correm: the correalation after registration(I1 and M);   

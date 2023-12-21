scanf("%d",&value);
root=newnode(value);
break;
case 2:
printf("\nEnter a number:");
scanf("%d",&value);
root=insert(root,value);
break;
case 3:
printf("\nEter a number:");
scanf("%d",&searchv);
search(root,searchv);
break;
case 4:
printf("\n..........................\n");
inorderTraversal(root);
printf("\n..........................\n");
break;
case 5:
printf("\n..........................\n");
preorderTraversal(root);
printf("\n..........................\n");
break;
case 6:
printf("\n..........................\n");
postorderTraversal(root);
printf("\n..........................\n");
break;
case 7:
printf("\nEnter a number to be deleted:");
scanf("%d",&key);
deletenode(root,key);
break;
default:
printf("invalid option!");}
}while(opt!=8);
return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 11:00:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 11:21:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef union	un_details
{
	char	car_license[10];
	int		property_id;
}	un_det;

typedef struct	st_asset
{
	int		id;
	char	type[10];
	un_det	info;
}	st_asset;

void	get_data(st_asset *asset)
{
	printf("Enter Asset ID : ");
	scanf("%d",&(asset->id));
	printf("Enter Asset Type : ");
	scanf("%s",(asset->type));
	printf("Enter Car License Plate : ");
	scanf("%s",(asset->info.car_license));
}

int	main()
{
	st_asset	asset;

	get_data(&asset);
	printf("\n--- Asset Report ---\n");
	printf("Asset ID : %d\n",asset.id);
	printf("Type : %s, License : %s\n",asset.type, asset.info.car_license);
	return (0);
}
